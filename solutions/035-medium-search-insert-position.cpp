class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size();
        if (end == 0) return 0;

        //upper_bound: Returns an iterator pointing to the first element in the range [first,last) which compares greater than val.
        //lower_bound: Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.
        //implement lower_bound
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= target) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};
