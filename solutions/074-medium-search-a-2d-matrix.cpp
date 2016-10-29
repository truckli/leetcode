class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    	if (matrix.empty()) return false;
    	int m = matrix.size(), n = matrix[0].size();
    	int start = 0, end = m * n;
    	while (start != end) {
    		int mid = start + (end - start)/2;
    		int midval = matrix[mid/n][mid%n];
    		if (midval < target) {
    			start = mid + 1;
    		} else {
    			end = mid;
    		}
    	}
    	if (start == m*n) return false;
    	return matrix[start/n][start%n] == target;
    }
};
