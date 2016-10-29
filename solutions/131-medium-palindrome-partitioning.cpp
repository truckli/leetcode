class Solution {
public:
    vector<vector<string>> partition(string s) {
    	int n = s.size();
    	if (n <= 0) return vector<vector<string>>();
    	vector<vector<vector<string>>> mid_results(n+1);//sub-problems for prefix of length 0~n
    	vector<int> curr;//suffixing palindromes of current sub-problem
    	for (int tail = 0; tail < n; ++tail) {
    		vector<int> next{tail};//start pos of palindromes that end at pos tail
    		//empty string is also a previous palindrome, but is easily neglected by mistake
    		if (tail > 0 && s[tail-1] == s[tail]) next.push_back(tail-1);
    		for (int start : curr) {
    			if (start > 0 && s[start-1] == s[tail]) {
    				next.push_back(start-1);
    			}
    		}
    		swap(curr, next);
    		for (int start : curr) {
    			string palindrome = s.substr(start, tail-start+1);
    			if (start == 0) mid_results[tail+1].push_back(vector<string>{palindrome});
    			for (auto old_path : mid_results[start]) {
    				old_path.push_back(palindrome);
    				mid_results[tail+1].push_back(old_path);
    			}
    		}
    	}
    	return mid_results[n];
    }
};
