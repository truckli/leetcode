class Solution {
public:
	bool isPalindrome(string s) {
		if (s.empty()) return true;
		auto start = s.begin(), end = prev(s.end());
		while (start != end) {
			if (!isalnum(*start)) {
				++start;
			} else if (!isalnum(*end)) {
				--end;
			} else if (tolower(*start) != tolower(*end)) {
				return false;
			} else if (start+1 == end){
				return true;
			} else {
				start++, end--;
			}
		}
		return true;
	}
};
