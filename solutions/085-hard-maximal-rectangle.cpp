class Solution1 {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
    	if (matrix.empty() || matrix[0].empty()) return 0;
    	int m = matrix.size(), n = matrix[0].size();
    	vector<int> heights(n+1, 0);
    	int result = 0;
    	for (int i = 0; i < m; ++i) {
    		for (int j = 0; j < n; ++j) {
    			if (matrix[i][j] == '0') {
    				heights[j] = 0;
    			} else {
    				heights[j] += 1;//number of 1's from matrix[i][j] above
    			}
    		}

    		//the problem is turned into "Largest Rectangle in Histogram"
            stack<int> s;
    		for (int j = 0; j <= n; ) {
    			if (s.empty() || heights[j] > heights[s.top()]) {
    				s.push(j++);
    			} else if (heights[j] == heights[s.top()]) {
    				s.top() = j++;
    			} else {
    				int peak = s.top();
    				s.pop();
    				int width = s.empty()?j:j-s.top() -1;
    				result = max(result, heights[peak] * width);
    			}
    		}
    	}
    	return result;
    }
};

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
    	if (matrix.empty() || matrix[0].empty()) return 0;
    	int m = matrix.size(), n = matrix[0].size();
    	/*
    	keep track of :
    	 1. height: number of 1's from matrix[i][j] above
    	 2. left_boundary and right_boundary: plateau edges
    	    heights of matrix[i][left_boundary] to matrix[i][right_boundary] is no lower than matrix[i][j]'s
    	*
    	* e.g, with matrix
    	    0011100
    	    0111110
    	* for col 3 and col 4 in both rows, the boundary is [2,5).
    	* for matrix[1][5], boundary is [1,6).
    	* for matrix[0][5], boundary is the whole row 0.
    	 */
    	vector<int> heights(n, 0), left_boundary(n, 0), right_boundary(n, n);
    	int result = 0;
    	for (int i = 0; i < m; ++i) {
    		//keep account of left and right boundary of current 1's block in current row
    		//current 1's block in current row is suppose to be the whole row initially
    		int left = 0, right = n;
    		for (int j = 0; j < n; ++j) {
    			if (matrix[i][j] == '0') {
    				left = j + 1;
    				heights[j] = 0;
    				left_boundary[j] = 0;//by definiton
    				right_boundary[j] = n;
    			} else {
    				heights[j] += 1;
    				/*
    				 * left boundary can only get narrower for consecutive vertical 1's block
    				 * picture this:
    				 * 		11111
    				 * 		01110
    				 * 		00110
    				 */
    				left_boundary[j] = max(left_boundary[j], left);
    			}
    		}

    		for (int j = n-1; j >= 0; --j) {
    			if (matrix[i][j] == '0') {
    				right = j;//right boundary is exclusive
    			} else {
    				right_boundary[j] = min(right_boundary[j], right);
    				result = max(result, heights[j] * (right_boundary[j] - left_boundary[j]));
    			}
    		}
    	}
    	return result;
    }
};
