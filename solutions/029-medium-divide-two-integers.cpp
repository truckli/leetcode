class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return INT_MAX;
        bool negative = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0);
        long long x = (dividend > 0) ? dividend : -(long long)dividend;
        long long y = (divisor > 0) ? divisor : -(long long)divisor;

        long long quotient = 0;
        while (x >= y) {
            long long grow = y, factor = 1;
            while (grow <= x) {
                x -= grow;
                quotient += factor;
                grow <<= 1;
                factor <<= 1;
            }
        }

        if (negative) quotient = -quotient;
        if (quotient > INT_MAX) return INT_MAX;// for INT_MIN/(-1)
        //if (quotient < INT_MIN) return INT_MIN;
        return quotient;
    }
};
