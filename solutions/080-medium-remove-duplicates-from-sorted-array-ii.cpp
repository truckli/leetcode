class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if (nums.size() <= 2) return nums.size();
    	int wr = 1;
    	for (int i = 2; i < nums.size(); ++i) {
    		if (nums[i] != nums[wr] || nums[wr] != nums[wr-1]) {
    			nums[++wr] = nums[i];
    		}
    	}
    	return wr + 1;
    }
};
