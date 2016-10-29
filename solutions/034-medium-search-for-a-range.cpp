class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int start = 0, end = nums.size();
        if (end == 0) return result;

        //suppose nums[end] = INT_MAX as a sentinel
        //invariant: lower_bound in [start, end], which is anti-intuitive
        //mid must be smaller than end, and can be equal to start
        while (start < end) {
           int mid = start + (end - start) / 2;
           if (nums[mid] >= target) {
               end = mid;
           } else {
               start = mid + 1;
           }
        }
        if (nums[start] != target) return result;
        result[0] = start;

        //invariant: upper_bound in [start, end], which is anti-intuitive
        start = 0;
        end = nums.size();
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > target) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }

        result[1] = start - 1;
        return result;
    }
};
