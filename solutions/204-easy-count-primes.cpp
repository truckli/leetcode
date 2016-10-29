class Solution {
public:
    int countPrimes(int n) {
    	if (n < 2) return 0;
    	vector<bool> composite(n, false);
    	int upper = sqrt(n);
    	int sum = 0;

    	for (int i = 2; i < n; ++i) {
    		if (!composite[i]) {
    			sum++;
    			if (i > upper) continue;//avoid overflow
    			for (int j = i*i; j < n; j += i) {
    				composite[j] = true;
    			}
    		}
    	}
    	return sum;
    }
};
