class Solution0 {//A little tricky to understand
public:
    string convertToTitle(int n) {
    	string result;
    	while (n) {
    		int d = n % 26;
    		if (d == 0) d = 26;
    		n -= d;
    		result += 'A' + d - 1;
    		n /= 26;
    	}
    	reverse(result.begin(), result.end());
    	return result;
    }
};

class Solution {//Still tricky
public:
    string convertToTitle(int n) {
    	string result;
    	while (n) {
    		n--;
    		result += 'A' + n % 26;
    		n /= 26;
    	}
    	reverse(result.begin(), result.end());
    	return result;
    }
};
