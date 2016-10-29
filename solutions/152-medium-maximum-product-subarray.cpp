class Solution {
public:
    int maxProduct(vector<int>& nums) {
       if (nums.empty()) return 0;

       int answer = nums[0], tail_min = nums[0], tail_max = nums[0];
       for (int i = 1; i < nums.size(); ++i) {
    	  int new_tail_min = min(nums[i], min(nums[i]*tail_min, nums[i]*tail_max));
    	  tail_max = max(nums[i], max(nums[i]*tail_min, nums[i]*tail_max));
    	  tail_min = new_tail_min;
    	  answer = max(answer, tail_max);
       }
       return answer;
    }
};
