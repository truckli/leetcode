class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min_gap = INT_MAX;
        int best_sum = INT_MAX;
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1, k = n - 1; j < k; ) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) return sum;
                if (abs(sum-target) < min_gap) {
                    min_gap = abs(sum-target);
                    best_sum = sum;
                }
                if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return best_sum;
    }
};
