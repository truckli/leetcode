/*
If the car starts at A and fails at B, then the answer cannot be between A and B.
Therefore another attempt can be started at the station one step further than B.

If the total gas storage is larger than total cost, then an answer is guaranteed.
If an answer is guaranteed, it can be found with one search pass, because the searching process would exclude all candidates
it passes.

*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    	int tank = 0, start = 0, total = 0;
    	for (int i = 0; i < gas.size(); ++i) {
    		tank += gas[i] - cost[i];
    		total += gas[i] - cost[i];
    		if (tank < 0) {
    			tank = 0;
    			start = i + 1;
    		}
    	}
    	return total >= 0 ? start : -1;
    }
};
