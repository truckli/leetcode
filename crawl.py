#!/usr/bin/env python

# http://wuchong.me/blog/2014/04/24/easy-web-scraping-with-python/

import os, sys, re
from re import DOTALL
import bs4
import requests
import ast
import BeautifulSoup


index_url = 'https://leetcode.com/problemset/algorithms/'

def get_html_text_from_url(url):
    try:
        return requests.get(url).text
    except:
        return ""

def write_file(filename, text):
    try:
        with open(filename, "w") as f:
            f.write(text)
            f.flush()
    except Exception as e:
        print e
    


def get_problem_desc(soup): 
    problem_desc = soup.find("div", class_="question-content")
    problem_desc = str(problem_desc.find("p"))
    problem_desc = bs4.BeautifulSoup(problem_desc, "html.parser").find_all(text=True)
    problem_desc = "".join(problem_desc).encode("utf-8")
#     problem_desc = problem_desc.replace("<br/>", "\n")
#     problem_desc = problem_desc.replace("</p>", "\n")
#     problem_desc = re.sub(r"<[^>]*>", "", problem_desc)
    return problem_desc
        

def find_next_symbol(text, symbol, start=0):
    in_quote = False
    in_escape = False
    for i in range(start, len(text)):
        c = text[i]
        if c == "\\" and not in_escape:
            in_escape = True
            continue
        
        if c == "'" and not in_escape:
            in_quote = not in_quote
        if text[i] == symbol and not in_quote:
            return  i
        in_escape = False
    print -1
  
    
def get_code_template(soup):
    ajaxform = soup.find("form", id = "ajaxform")
    if not ajaxform:
        print "oops!"
    code_template = str(ajaxform["ng-init"])
    start = code_template.find("[")
    end =  find_next_symbol(code_template, "]", start+1)
    code_template = code_template[start:end+1]
    oj_languages = ast.literal_eval(code_template)
    for oj_language in oj_languages:
        if oj_language['text'] == 'C++':
            code_template = oj_language['defaultCode']
            break
        
    code_template = re.sub(r"\\u[\da-fA-F]{4}", lambda match: chr(int(match.group(0)[2:6], 16)), code_template)
    code_template = code_template.replace("\r", "")
    code_template = code_template.replace("\\r", "")
    return code_template
#         print code_template


problems = []
def get_video_page_urls():
    #response = requests.get(index_url)
    #soup = bs4.BeautifulSoup(response.text, "html.parser")
    soup = bs4.BeautifulSoup(open("index.html"), "html.parser")
    obj = soup.find('table', id='problemList').tbody   
    problem_list = obj.find_all('tr')
    
    for tr in problem_list:
        problem_attr_list = tr.find_all('td')
        problem = {}
        problem["id"] = int(problem_attr_list[1].string)
        problem["name"] = str(problem_attr_list[2].a.string)
        problem["lowname"] = problem["name"].lower().replace(" ", "-")
        problem["url"] = 'https://leetcode.com' + str(problem_attr_list[2].a.attrs.get("href"))
        problem["discuss_url"] = 'https://leetcode.com/discuss/questions/oj/' + problem["lowname"] 
        problem["acceptance"] = float(problem_attr_list[3].string.strip('%'))
        problem["difficulty_val"] = float(problem_attr_list[4]['value'].strip('%'))
        problem["difficulty_type"] = str(problem_attr_list[4].string)  
        id = problem_list.index(tr) 
        print("Processing problem %d:%s ......\n" %(problem["id"], problem["name"]))
        try:            
            html_fname = "html/%d-%s.html"%(problem["id"], problem["lowname"])
            html_text = ""
            if os.path.isfile(html_fname):
                html_file = open(html_fname, "r")
                html_text = html_file.read().decode("utf-8")
                html_file.close()
            if html_text == "":
                html_text = get_html_text_from_url(problem["url"])
            soup = bs4.BeautifulSoup(html_text, "html.parser")
            write_file(html_fname, html_text.encode("utf-8"))
            print("Downloading problem %d:%s success \n" %(problem["id"], problem["name"]))
            problem["code_template"] = get_code_template(soup)
            write_file("cpp/%03d-%s-%s.cpp" % (problem["id"], problem["difficulty_type"].lower(), problem["lowname"]), problem["code_template"])
            print("Extracting code %d:%s success \n" %(problem["id"], problem["name"]))
            problem["problem_des"] = get_problem_desc(soup)              
            print("Extracting problem %d:%s success \n" %(problem["id"], problem["name"]))
        except Exception as e:
            print e
            problem["code_template"] = ""
            problem["problem_des"] = "" 
            print("Processing problem %d:%s fails\n" %(problem["id"], problem["name"]))
#         sys.exit(0)
        problems.append(problem)
    



if __name__ == '__main__':
    
    get_video_page_urls()
    problems.sort(key=lambda x: (x["id"]))
    with open("leetcode-offline.md", "w") as f:
        f.write("# Problems:\n")
    with open("leetcode-offline.md", "a") as f:
        for problem in problems:
            f.write("## %d %s   \n" % (problem["id"], problem["name"]))
            f.write("Problem url:<%s>    \n" % (problem["url"]))
            f.write("Discussion url:<%s>    \n" % (problem["discuss_url"]))
            f.write("Difficulty:  %s(%f)   \n" % (problem["difficulty_type"], problem["difficulty_val"]))
            f.write("\n```   \n")
            if problem["problem_des"] == "":
                f.write("no problem description   \n")
            else:
                f.write(problem["problem_des"])
            f.write("\n```   \n")
            f.write("\n```   \n")
            if problem["code_template"] == "":
                f.write("no code template    \n")
            else:
                f.write(problem["code_template"])
            f.write("\n```   \n")
            f.write("\n---    \n")







            
            
