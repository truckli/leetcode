class Solution {
public:
	int minCut(string s) {
		int n = s.size();
		if (n <= 0) return 0;
		vector<int>min_cuts(n+1, INT_MAX);
    	vector<int> curr;//suffixing palindromes of current sub-problem
		for (int tail = 0; tail < n; ++tail) {
			vector<int> next { tail }; //start pos of palindromes that end at pos tail
			//empty string is also a previous palindrome, but is easily neglected by mistake
			if (tail > 0 && s[tail - 1] == s[tail])
				next.push_back(tail - 1);
			for (int start : curr) {
				if (start > 0 && s[start - 1] == s[tail]) {
					next.push_back(start - 1);
				}
			}
			swap(curr, next);
			for (int start : curr) {
				if (start == 0) {
					min_cuts[tail+1] = 0;
					break;
				}
				min_cuts[tail+1] = min(min_cuts[tail+1], min_cuts[start]+1);
			}
		}
		return min_cuts[n];
	}
};

//https://leetcode.com/discuss/9476/solution-does-not-need-table-palindrome-right-uses-only-space


class Solution0 {
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> cut(n+1, 0);  // number of cuts for the first k characters
        for (int i = 0; i <= n; i++) cut[i] = i-1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; i-j >= 0 && i+j < n && s[i-j]==s[i+j] ; j++) // odd length palindrome
                cut[i+j+1] = min(cut[i+j+1],1+cut[i-j]);

            for (int j = 1; i-j+1 >= 0 && i+j < n && s[i-j+1] == s[i+j]; j++) // even length palindrome
                cut[i+j+1] = min(cut[i+j+1],1+cut[i-j+1]);
        }
        return cut[n];
    }
};











