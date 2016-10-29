//20ms
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority_elem = INT_MIN;
        int majority_count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == majority_elem) {
                majority_count++;
            } else {
                if (majority_count > 0) {
                    majority_count--;
                } else {
                    majority_elem = nums[i];
                    majority_count = 1;
                }
            }
        }
        return majority_elem;
        
    }
};
