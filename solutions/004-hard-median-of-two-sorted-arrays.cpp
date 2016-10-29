#include "debug-helper.h"


class Solution {
    int find_kth(vector<int>& nums1, int start1, vector<int>& nums2, int start2, int k) {
        if (start1 >= nums1.size()) return nums2[k-1];
        if (start2 >= nums2.size()) return nums1[k-1];
        if (k == 1) return min(nums1[start1], nums2[start2]);
        
        int len1 = nums1.size() - start1, len2 = nums2.size() - start2;
        int cut1, cut2;
        if (len1 < len2) {
            cut1 = min(k/2, len1);
            cut2 = k - cut1;
        } else {
            cut2 = min(k/2, len2);
            cut1 = k - cut2;
        }

        int mid1 = start1 + cut1 - 1, mid2 = start2 + cut2 - 1;
        if (nums1[mid1] > nums2[mid2]) {
            return find_kth(nums1, start1, nums2, mid2+1, k-cut2);
        } else if (nums1[mid1] < nums2[mid2]) {
            return find_kth(nums1, mid1+1, nums2, start2, k-cut1);
        } else {
            return nums1[mid1];
        }
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if ((m+n) % 2)
            return find_kth(nums1, 0, nums2, 0, (m+n)/2+1);
        else
            return (find_kth(nums1, 0, nums2, 0, (m+n)/2) + find_kth(nums1, 0, nums2, 0, (m+n)/2+1)) / 2.0;

    }
};

int main()
{
    Solution sol;
    vector<int> nums1{2,3,4,5,6}; vector<int>nums2{1};
    double res = sol.findMedianSortedArrays(nums1, nums2); 
    cout << res << endl;

}
