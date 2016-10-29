
//http://www.geeksforgeeks.org/largest-rectangle-under-histogram/
//https://leetcode.com/discuss/12780/my-concise-c-solution-ac-90-ms
class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
    	if (height.empty()) return 0;
    	height.push_back(0);//sentinel
    	int n = height.size();
    	int max_area = 0;
    	stack<int> s;
    	/*
    	for two adjacent elements p, q in stack, if p in deeper than q in stack, we have:
    	 * p < q
    	 * height[p] < height[q]
    	 * for p < x < q, height[p] < height[x], height[x] >= height[q], all such x's form a peak plateau
    	 *
    	*/
    	for(int i = 0; i < n; ) {
    		if (s.empty() || height[i] > height[s.top()]) {
    			s.push(i++);
    		} else if (height[i] == height[s.top()]) {
				s.top() = i++;//bookkeep the rightmost pos with this value
			} else { // height[i] < height[s.top()]
				int peak = s.top();//peak height becomes useless after computing the rectangle with it
				s.pop();
				int width = s.empty() ? i : i - s.top() - 1;//imaginarily, height[-1] = 0
				max_area = max(max_area, height[peak] * width);
			}
		}
		return max_area;
        
    }
};
