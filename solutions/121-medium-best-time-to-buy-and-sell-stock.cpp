class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if (prices.size() < 2) return 0;
       int cur_min = prices[0], answer = 0;
       for (int i = 1; i < prices.size(); ++i) {
    	   answer = max(answer, prices[i] - cur_min);
    	   cur_min = min(prices[i], cur_min);
       }
       return answer;
    }
};
