class Solution {
public:
    void sortColors(vector<int>& nums) {
    	int n = nums.size();
    	if (n <= 1) return;

    	int zero_end = 0, one_end = 0, two_start = n;
    	while (one_end < two_start) {
    		if (nums[one_end] == 1) {
    			one_end++;
    		} else if (nums[one_end] == 0) {
    			swap(nums[zero_end++], nums[one_end++]);
    		} else {
    			swap(nums[--two_start], nums[one_end]);
    		}
    	}
    }
};
