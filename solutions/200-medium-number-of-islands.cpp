class Solution {
private:
	int nrow;
	int ncol;
	void mark(vector<vector<char>>& grid, int r, int c) {
		if (r < 0 || r >= nrow || c < 0 || c >= ncol || grid[r][c] != '1') return;
		grid[r][c] = '2';
		mark(grid, r-1, c);
		mark(grid, r+1, c);
		mark(grid, r, c-1);
		mark(grid, r, c+1);
	}
public:
    int numIslands(vector<vector<char>>& grid) {
    	if (grid.empty() || grid[0].empty()) return 0;
    	nrow = grid.size();
    	ncol = grid[0].size();
    	int count = 0;
    	for (int r = 0; r < nrow; ++r) {
    		for (int c = 0; c < ncol; ++c) {
    			if (grid[r][c] == '1') {
    				count++;
    				mark(grid, r, c);
    			}
    		}
    	}
    	return count;
    }
};
