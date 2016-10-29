class Solution {
public:
	vector<string> fullJustify(vector<string>& words, int maxWidth) {
    	vector<string> result;
    	vector<string> line_words;
    	int left_room = maxWidth, realLen = 0;
    	for (auto word : words) {
    		if (word.empty()) continue;
    		int require_room = word.size() + (line_words.size()?1:0);
    		if (left_room < require_room){ //add a line
    			int nspaces = maxWidth - realLen;
    			if (line_words.size() == 1) {
    				result.push_back(line_words[0]+string(nspaces, ' '));
    			} else {
    				int nsep = line_words.size() - 1;
    				string sep(nspaces/nsep, ' ');
    				int nextra = nspaces % nsep;
    				string line;
    				for (int i = 0; i < nsep; ++i) {
    					line += line_words[i] + sep;
    					if (i < nextra) line.push_back(' ');
    				}
    				line += line_words.back();
    				result.push_back(line);
    			}
    			line_words.clear();
    			left_room = maxWidth;
    			realLen = 0;
    			require_room = word.size();
    		}

    		left_room -= require_room;
    		realLen += word.size();
    		line_words.push_back(word);
    	}

    	if (line_words.size()) {
    		string lastline;
    		for (int i = 0; i < line_words.size() - 1; ++i) {
    			lastline += line_words[i] + ' ';
    		}
    		lastline += line_words.back() + string(maxWidth - realLen - (line_words.size()-1), ' ');
    		result.push_back(lastline);
    	}

    	if (result.empty()) //all words empty
    		result.push_back(string(maxWidth, ' '));

    	return result;
    }
};

