class Solution {
public:
    int trailingZeroes(int n) {
       long long count = 0, base = 5;
       while (base <= n) {
    	   count += n/base;
    	   base *= 5;
       }
       return count;
    }
};
