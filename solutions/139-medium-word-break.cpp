class Solution_naive { //DFS
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
    	for (auto word : wordDict) {
    		if (word.size() <= s.size() && s.substr(0, word.size()) == word) {
    			string last(s.begin() + word.size(), s.end());
    			if (wordBreak(last, wordDict)) return true;
    		}
    	}
    	return false;
    }
};

class Solution { //DP, O(n^2) times dictionary search time
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
    	int n = s.size();
    	vector<bool> f(n+1, false);
    	f[0] = true;
    	for (int i = 1; i <= n; ++i) { //i: end index of substring for search; current DP size
    		for (int j = 0; j < i; ++j) { // j: start index of substring
    			if (wordDict.find(s.substr(j, i-j)) != wordDict.end() && f[j]) {
    				f[i] = true;
    			}
    		}
    	}
    	return f[n];
    }
};

