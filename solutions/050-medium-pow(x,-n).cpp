// iterative
class Solution {
public:
    double myPow(double x, int n) {
        bool negative = false;
        if (n < 0) {
            negative = true;
            n = -n;
        }
        int result = 1;
        int weight = 1;//1,2,4,8
        double d = x;//x^weight
        while (n > 0) {
            if (n % (weight << 1)) {
                result *= d;
                n -= weight;
            }
            d *= d;
            weight <<= 1;
        }

        return negative? (1.0/result) : result;
    }
};


// iterative
class Solution {
public:
    double myPow(double x, int n) {
        bool negative = false;
        if (n < 0) {
            negative = true;
            n = -n;
        } else if (n == 0)
            return 1;

        double result = n%2 ? x : 1;
        double sub = myPow(x, n/2);
        result *= (sub * sub);
        return negative? (1.0/result) : result;
    }

};
