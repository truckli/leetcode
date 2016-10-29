class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
    	int n = prices.size();
        vector<int> dp(n+1, INT_MIN);
        vector<int> dp2(n+1, INT_MIN);
        cur_min_elem = 0;
        for (int i = 1; i < n; ++i) {
        	dp[i] =  max(dp[i-1], prices[i]-cur_min_elem);
        	cur_min_elem = min(cur_min_elem, prices[i]);
        }
    }
};
