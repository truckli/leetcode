class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.size() < 2) return 0;

        int max_area = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            if (height[i] < height[j]) {
                max_area = max(max_area, height[i] * (j-i));
                i++; 
            } else {
                max_area = max(max_area, height[j] * (j-i));
                j--; 
            }
        }
        return max_area;
    }
};



