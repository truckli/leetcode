class Solution {
public:
    int climbStairs(int n) {
        if (n < 2) return 1;
        int prev0 = 1, prev1 = 1;
        int result;
        for (int i = 2; i <= n; ++i) {
            result = prev0 + prev1;
            prev0 = prev1;
            prev1 = result;
        }
        return result;
    }
};
