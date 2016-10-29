class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;
        int answer = nums[0], max_sum_end = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (max_sum_end + nums[i] > nums[i]) {
                max_sum_end += nums[i];
            } else {
                max_sum_end = nums[i];
            }
            answer = max(answer, max_sum_end);
        }
        return answer;
    }
};
