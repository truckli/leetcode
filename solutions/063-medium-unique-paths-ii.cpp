class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    	int m = obstacleGrid.size();
    	if (m == 0) return 0;
    	int n = obstacleGrid[0].size();
    	if (n == 0) return 0;
    	vector<int> ways(n, 1);
    	auto it = find(obstacleGrid[m-1].rbegin(), obstacleGrid[m-1].rend(), 1);
    	fill(ways.rbegin()+(it-obstacleGrid[m-1].rbegin()), ways.rend(), 0);
    	for (int i = m-2; i >= 0; --i) {
    	    if (obstacleGrid[i][n-1] == 1) ways[n-1] = 0;
    		for (int j = n - 2; j >= 0; --j) {
    			if (obstacleGrid[i][j] == 1) {
    				ways[j] = 0;
    			} else {
    				ways[j] += ways[j+1];
    			}
    		}
    	}
    	return ways[0];
    }
};
