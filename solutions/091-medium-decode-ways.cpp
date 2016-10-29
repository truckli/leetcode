class Solution0 {//this would time-out
	int numDecodings(string &s, int start, int end) {
		if (end - start <= 1) return 1;
		if (s[start] == '1') {
			if (s[start+1] == '0') {
				return numDecodings(s, start+2, end);
			}
			return numDecodings(s, start+1, end) + numDecodings(s, start+2, end);
		}
		if (s[start] == '2') {
			if (s[start+1] == '0') {
				return numDecodings(s, start+2, end);
			} else if (s[start+1] > '6') {
				return numDecodings(s, start+1, end);
			}
			return numDecodings(s, start+1, end) + numDecodings(s, start+2, end);
		}
		return numDecodings(s, start+1, end);
	}
public:
    int numDecodings(string s) {
    	return numDecodings(s, 0, s.size());
    }
};

class Solution1 { //uses O(n) space, which is undesirable
public:
	int numDecodings(string s) {
		if (s.empty()) return 0;//to adapt to  the judge system
		if (s[0] == '0') return 0;//0 for illegal input
		int n = s.size();
		if (n == 1) return 1;
		vector<int> ways(n+1, 1);//ways[i] is number of ways to decode a length-i prefix

		for (int i = 1; i < n; ++i) {
			if (s[i-1] == '1') {
				if (s[i] == '0') ways[i+1] = ways[i-1];
				else ways[i+1] = ways[i-1] + ways[i];
			} else if (s[i-1] == '2') {
				if (s[i] == '0') ways[i+1] = ways[i-1];
				else if (s[i] > '6') ways[i+1] = ways[i];
				else ways[i+1] = ways[i] + ways[i-1];
			} else {
				if (s[i] == '0') return 0;
				ways[i+1] = ways[i];
			}
		}
		return ways[n];
	}
};

class Solution { //uses O(1) space
public:
	int numDecodings(string s) {
		if (s.empty()) return 0;//to adapt to  the judge system
		if (s[0] == '0') return 0;//0 for illegal input
		int n = s.size();
		if (n == 1) return 1;
		int prev_prev = 1, prev = 1, cur = 1;

		for (int i = 1; i < n; ++i) {
			if (s[i] == '0') {
				if (s[i-1] == '1' || s[i-1] == '2') {
					cur = prev_prev;
				} else
					return 0;
			} else if ((s[i] >= '1' && s[i] <= '6' && s[i-1] == '2') || (s[i-1] == '1')) {
				cur = prev + prev_prev;
			} else {
				cur = prev;
			}
			prev_prev = prev;
			prev = cur;
		}
		return cur;
	}
};

