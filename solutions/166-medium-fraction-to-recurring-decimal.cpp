class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
    	if (numerator == 0) return "0";

    	long long n = numerator, d = denominator;
    	string result;
    	if (n < 0 ^ d < 0) {
    		result = "-";
    	}
    	n = abs(n);
    	d = abs(d);

    	long long intpart = n / d, r = n % d;
    	result += to_string(intpart);
    	if (r == 0) {
    		return result;
    	}
    	result += '.';

    	unordered_map<long long, int> map;
    	while (r) {
    		if (map.find(r) != map.end()) {
    			result.insert(map[r], 1, '(');
    			result += ')';
    			return result;
    		}

    		map[r] = result.size();
    		r *= 10;
    		int q = r / d;
    		r %= d;
    		result += to_string(q);
    	}
    	return result;
    }
};
