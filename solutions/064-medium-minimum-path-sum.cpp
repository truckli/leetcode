class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
    	if (grid.empty() || grid[0].empty()) return 0;
    	vector<int> sum(grid[0].size(), 0);
    	partial_sum(grid.back().rbegin(), grid.back().rend(), sum.rbegin());
    	for_each(grid.rbegin()+1, grid.rend(), [&sum](vector<int> &vec){
    		sum.back() += vec.back();
    		for (int j = sum.size()-2; j >= 0; --j) {
    			sum[j] = vec[j] + min(sum[j], sum[j+1]);
    		}
    	});
    	return sum[0];
    }
};
