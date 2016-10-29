/*
The data values go up and down like hills. Left slopes and right ones are independant, except peak values which belongs to both a left slope and a right one. In the first run, we make sure candy values in the left slopes are correct. In the second run we work on right slopes and in the same time guarantee the peak values are still peaks.
*/


class Solution {
public:
    int candy(vector<int>& ratings) {
    	int n = ratings.size();
    	if (n <= 1) return n;

    	vector<int> candies(n, 1);
    	for (int i = 1; i < n; ++i) {
    		if (ratings[i] > ratings[i-1]) {
    			candies[i] = candies[i-1] + 1;
    		}
    	}
    	for (int i = n-2; i >= 0; --i) {
    		if (ratings[i] > ratings[i+1]) {
    			candies[i] = max(candies[i+1] + 1, candies[i]);
    		}
    	}

    	return accumulate(candies.begin(), candies.end(), 0);
    }
};
