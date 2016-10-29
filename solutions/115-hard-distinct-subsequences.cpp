class Solution0 {
	vector<vector<int>> memo;
	string s;
	string t;
	int count(int ssize, int tsize) {
		if (memo[ssize][tsize] >= 0) {
			return memo[ssize][tsize];
		}
		if (ssize < tsize) {
			memo[ssize][tsize] = 0;
		} else if (tsize == 0) {
			memo[ssize][tsize] = 1;
		} else if (s[ssize-1] != t[tsize-1]) {
			memo[ssize][tsize] = count(ssize-1, tsize);
		} else {
			memo[ssize][tsize] = count(ssize-1, tsize) + count(ssize-1, tsize-1);
		}
		return memo[ssize][tsize];
	}
public:
    int numDistinct(string s, string t) {
    	memo.resize(s.size()+1, vector<int>(t.size()+1, -1));
    	this->s = s;
    	this->t = t;
    	return count(s.size(), t.size());
    }
};


class Solution {
public:
    int numDistinct(string s, string t) {
    	int m = s.size(), n = t.size();
    	vector<vector<int>> stage(m+1, vector<int>(n+1, 0));
    	stage[0][0] = 1;

    	for (int i = 1; i <= m; ++i) {
    		stage[i][0] = 1;
    		for (int j = 1; j <= n; ++j) {
    			if (s[i-1] != t[j-1]) {
    				stage[i][j] = stage[i-1][j];
    			} else {
    				stage[i][j] = stage[i-1][j] + stage[i-1][j-1];
    			}
    		}
    	}

    	return stage[m][n];
    }
};
