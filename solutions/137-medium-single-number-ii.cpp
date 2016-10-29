class Solution {
public:
    int singleNumber(vector<int>& nums) {
    	vector<int> bitcount(32, 0);
    	for (auto x : nums) {
    		for (int i = 0; i < 32; ++i) {
    			if (x & 0x1 << i) {
    				bitcount[i]++;
    			}
    		}
    	}

    	int result = 0;
		for (int i = 0; i < 32; ++i) {
			if (bitcount[i]%3) {
				result |= 0x1 << i;
			}
		}
		return result;
    }
};
