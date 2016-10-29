class Solution0 {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.empty()) return -1;
        if (nums.size() == 1) return 0;
        
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start)/2;
            if ((mid == start || nums[mid] > nums[mid-1]) && nums[mid] > nums[mid+1]) {
                return mid;
            }
            if (nums[mid] < nums[mid+1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start;
    }
};

class Solution {
public:
    int findPeakElement(const vector<int> &num)
    {
        int low = 0;
        int high = num.size()-1;

        while(low < high)
        {
            int mid1 = (low+high)/2;
            int mid2 = mid1+1;
            if(num[mid1] < num[mid2])
                low = mid2;
            else
                high = mid1;
        }
        return low;
    }
};
