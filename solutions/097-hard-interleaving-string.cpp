class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
    	int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
    	if (n1 + n2 != n3) return false;
    	if (s1.empty()) return s2 == s3;
    	if (s2.empty()) return s1 == s3;
    	// cache[x][y] s1[0...x) s2 [0...y) s3[0...x+y)
    	vector<vector<bool>> cache(n1+1, vector<bool>(n2+1, false));
    	cache[0][0] = true;
    	for (int j = 1; j <= n2; ++j) {
    		cache[0][j] = cache[0][j-1] && s2[j-1] == s3[j-1];
    	}
    	for (int i = 1; i <= n1; ++i) {
    		cache[i][0] = cache[i-1][0] && s1[i-1] == s3[i-1];
    		for (int j = 1; j <= n2; ++j) {
    			cache[i][j] = (s1[i-1] == s3[i+j-1] && cache[i-1][j]) || (s2[j-1] == s3[i+j-1] && cache[i][j-1]);
    		}
    	}
    	return cache[n1][n2];
    }
};
