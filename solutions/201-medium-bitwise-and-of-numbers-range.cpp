class Solution1 {
public:
	int rangeBitwiseAnd(int m, int n) {
		int mask = 1 << 30;
		int result = 0;
		while (mask) {
			int mm = mask & m, mn = mask & n;
			if (mm == mn) {
				result |= mask & m;
			} else {
				break;
			}
			mask >>= 1;
		}
		return result;
	}
};

class Solution2 {
public:
	int rangeBitwiseAnd(int m, int n) {
		while (m < n)
			n = n & (n - 1);
		return n;
	}
};

class Solution3 {
public:
	int rangeBitwiseAnd(int m, int n) {
	    return (n > m) ? (rangeBitwiseAnd(m/2, n/2) << 1) : m;
	}
};



class Solution: public Solution3 {
};
