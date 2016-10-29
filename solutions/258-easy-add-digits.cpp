


class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int res = 0;
            while (num) {
                res += num % 10;
                num /= 10;
            }
            num = res;
        }
        return num;
    }
};

//The result is 0 if and only if the num itself is 0.
//Otherwise, the result will range from 1 to 9.

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return (num - 1) % 9 + 1;
    }
};

