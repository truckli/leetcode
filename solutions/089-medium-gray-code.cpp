class Solution {
public:
    vector<int> grayCode(int n) {
    	vector<int> result(1, 0);
    	if (n == 0) return result;
    	int d = 1;
    	result.push_back(1);
    	for (; d < n; ++d) {
    		int msb = 1 << d;
    		int size = result.size();
    		result.resize(size * 2);
    		transform(result.rbegin()+size, result.rend(), result.begin()+size, [&msb](int val){ return msb + val;});
    	}
    	return result;
    }
};
