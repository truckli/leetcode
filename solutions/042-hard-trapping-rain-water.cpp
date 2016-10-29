// O(n) space
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;

        vector<int> left_height(n, 0), right_height(n, 0);
        for (int i = 1; i < n; ++i) {
            left_height[i] = max(left_height[i-1], height[i-1]);
            right_height[n-i-1] = max(right_height[n-i], height[n-i]);
        }

        int capacity = 0;
        for (int i = 1; i < n-1; ++i) {
            int h = min(left_height[i], right_height[i]);
            if (h > height[i]) {
                capacity += h - height[i];
            }
        }
        return capacity;
    }
};

// O(1) space
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;

        int peak = max_element(height.begin(), height.end()) - height.begin();
        int capacity = 0;
        for (int i = 1, maxh = height[0]; i < peak; ++i) {
            if (maxh > height[i]) capacity += maxh - height[i];
            else maxh = height[i];
        }

        for (int i = n-2, maxh = height[n-1]; i > peak; --i) {
            if (maxh > height[i]) capacity += maxh - height[i];
            else maxh = height[i];
        }
        return capacity;
    }
};
