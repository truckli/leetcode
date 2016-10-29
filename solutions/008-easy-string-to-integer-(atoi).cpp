/*LeetCode Book: To deal with overflow, inspect the current number before multiplication. If the current number is greater than 214748364, we know it is going to overflow. On the other hand, if the current number is equal to 214748364, we know that it will overflow only when the current digit is greater than or equal to 8.
*/

//8ms
//Your runtime beats 55.04% of cpp submissions.
class Solution {
public:
    int myAtoi(string str) {
        long long val = 0;
        bool negative = false;
        int i = 0;
        for (; i < str.size() && isspace(str[i]); ++i);
        if (i < str.size()) {
            if (str[i] == '-') {
                negative = true;
                ++i;
            } else if (str[i] == '+') {
                ++i;
            }
        }
        
        for (; i < str.size(); ++i) {
            int digit = str[i] - '0';
            if (digit >= 0 && digit <= 9) {
                val = val * 10 + digit;
                if (val > INT_MAX) break;
            } else {
                break;
            }
        }

        if (negative) val = -val;
        if (val > INT_MAX) return INT_MAX;
        if (val < INT_MIN) return INT_MIN;
        return (int)val; 
    }
};
