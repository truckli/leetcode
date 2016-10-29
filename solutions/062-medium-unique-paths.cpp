class Solution {
public:
    int uniquePaths(int m, int n) {
    	if (m == 1 || n == 1) return 1;
    	vector<int> ways(n, 1);
    	for (int i = m-2; i >= 0; --i) {
    		for (int j = n-2; j >= 0; --j) {
    			ways[i][j] += ways[i][j+1];
    		}
    	}
    	return ways[0];
    }
};
