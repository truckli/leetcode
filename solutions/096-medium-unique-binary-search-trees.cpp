class Solution1 {
	vector<int> cache;
public:
    int numTrees(int n) {
    	if (n <= 1) return 1;
    	if (cache.empty()) cache.resize(n+1, 0);
    	cache[0] = cache[1] = 1;
    	if (cache[n]) return cache[n];
    	int sum = 0;
    	for (int k = 0; k < n; ++k) {
    		sum += numTrees(k) * numTrees(n-1-k);
    	}
    	cache[n] = sum;
    	return sum;
    }
};

class Solution {
	vector<int> cache;
public:
    int numTrees(int n) {
    	if (n <= 1) return 1;
    	if (cache.empty()) cache.resize(n+1, 0);
    	cache[0] = cache[1] = 1;

    	for (int i = 2; i <= n; ++i) {
    		int sum = 0;
    		for (int k = 0; k < i; ++k) {
    			sum += cache[k] * cache[i-1-k];
    		}
    		cache[i] = sum;
    	}
    	return cache[n];
    }
};
