class Solution1 {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
       int narray = INT_MAX, narray_tail = 0;
       int sum_tail = 0;

       for (auto i = 0; i < nums.size(); ++i) {
    	   sum_tail += nums[i];
    	   narray_tail++;
    	   while(narray_tail-1 <= i && sum_tail - nums[i-narray_tail+1] >= s) {
    		   sum_tail -= nums[i-narray_tail+1];
    		   narray_tail--;

    	   }
    	   if (sum_tail >= s) narray = min(narray, narray_tail);
       }
       return narray == INT_MAX? 0: narray;
    }
};

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size(), start = 0, sum = 0, minlen = INT_MAX;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum >= s) {
                minlen = min(minlen, i - start + 1);
                sum -= nums[start++];
            }
        }
        return minlen == INT_MAX ? 0 : minlen;
    }
};

