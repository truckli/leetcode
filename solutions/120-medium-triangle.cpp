class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    	if (triangle.empty()) return 0;
    	vector<int> answer = triangle.back();
    	for (int r = triangle.size() - 2; r >= 0; --r) {
    		for (int c = 0; c <= r; ++c) {
    			answer[c] = triangle[r][c] + min(answer[c], answer[c+1]);
    		}
    	}
    	return answer[0];
    }
};
