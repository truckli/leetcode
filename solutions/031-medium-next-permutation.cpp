class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int i;
        for (i = nums.size() - 1; i > 0; --i) {
            if (nums[i-1] < nums[i]) break;
        }
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = i-1;
        while (i < nums.size() && nums[i] > nums[j]) {
            i++;
        }
        swap(nums[i-1], nums[j]);
        reverse(nums.begin()+j+1, nums.end());
    }
};
