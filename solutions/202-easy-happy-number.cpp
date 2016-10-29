class Solution {
public:
    bool isHappy(int n) {
    	if (n == 1) return true;
    	int slow = n, fast = n;
    	do {
    		slow = digitSquareSum(slow);
    		fast = digitSquareSum(fast);
    		fast = digitSquareSum(fast);
    		if (fast == 1) return true;
    	} while (fast != slow);
    	return false;
    }
private:
    int digitSquareSum(int n) {
    	int sum = 0;
    	while (n) {
    		int digit = n % 10;
    		n /= 10;
    		sum += digit * digit;
    	}
    	return sum;
    }
};
