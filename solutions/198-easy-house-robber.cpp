class Solution {
public:
    int rob(vector<int>& nums) {
        int maxp = 0, maxp_ntail = 0;
        for (auto v : nums) {
            int tmp = maxp_ntail;
            maxp_ntail = maxp;
            maxp = max(tmp+v, maxp);
        }
        return maxp;
    }
};
