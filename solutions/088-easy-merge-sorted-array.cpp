class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int wr = m+n-1, rd1 = m-1, rd2 = n-1; wr >= 0; wr--) {
            if (rd1 < 0 || (rd2>=0 && nums1[rd1] < nums2[rd2])) {
                nums1[wr] = nums2[rd2--];
            } else {
                nums1[wr] = nums1[rd1--];
            }
        }
    }
};
