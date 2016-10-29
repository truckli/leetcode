class Solution0 { //O(n) time and space
public:
    int maxProfit(vector<int>& prices) {
    	int n = prices.size();
    	if (n < 2) return 0;
    	vector<int> stage(n, 0);//stage[i] -> max one-transaction profit in prices[0..i]
    	int cur_min = prices[0];
    	for (int i = 1; i < n; ++i) {
    		stage[i] = max(prices[i] - cur_min, stage[i-1]);
    		cur_min = min(prices[i], cur_min);
    	}

    	int cur_max = prices[n-1];
    	int answer = stage[n-1];
    	int second_profit = 0;
    	for (int i = n-2; i > 0; --i) {
    		second_profit = max(cur_max - prices[i], second_profit);//max one-transaction profit in [i..n-1]
    		cur_max = max(prices[i], cur_max);
    		answer = max(answer, second_profit + stage[i-1]); //profit of [0..i-1] plus [i..n-1]
    	}
    	return answer;
    }
};


class Solution {//O(1) space, O(n) time
public:
    int maxProfit(vector<int>& prices) {
    	if (prices.size() < 2) return 0;
    	int buy1 = INT_MIN, sell1 = 0, buy2 = INT_MIN, sell2 = 0;
    	for (auto price : prices) { //in each iteration pos
    		sell2 = max(sell2, buy2 + price);// max profit after 2 sells
    		buy2 = max(buy2, sell1 - price); // max profit after 2 buys and 1 sell
    		sell1 = max(sell1, buy1 + price); // max profit after 1 buy and 1 sell
    		buy1 = max(buy1, -price); //max profit(min cost) after 1 buy
    	}
    	return max(sell2, sell1);
    }
};

