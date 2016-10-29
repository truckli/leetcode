class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reach = 0;
        int i = 0;
        while (i <= reach) {
        	if (i >= n - 1) return true;
        	reach = max(reach, i+nums[i]);
        	i++;
        }
        return false;
    }
};
