class Solution0 {
public:
	vector<string> findRepeatedDnaSequences(string s) {
		vector < string > result;
		if (s.size() < 11) return result;
		unordered_map<string, int> counter;
		for (int i = 0; i <= s.size()-10; ++i) {
			string seq = s.substr(i, 10);
			if (counter.find(seq) == counter.end()) {
				counter[seq] = 1;
			} else if (counter[seq] == 1) {
				result.push_back(seq);
				counter[seq] = 2;
			}
		}
		return result;
	}
};

class Solution {//Rolling hash
private:
	int hash_char(char c) {
		if (c == 'A') return 0;
		if (c == 'C') return 1;
		if (c == 'G') return 2;
		return 3;
	}
public:
	vector<string> findRepeatedDnaSequences(string s) {
		vector<string> result;
		if (s.size() < 11) return result;

		int hashv = 0;
		for (int i = 0; i < 10; ++i) {
		    hashv = (hashv << 2) + hash_char(s[i]);
		}
		unordered_map<int, int> counter;
		counter[hashv] = 1;

		for (int i = 10; i < s.size(); ++i) {
			hashv -= hash_char(s[i-10]) * (1<<18);
		    hashv = (hashv << 2) + hash_char(s[i]);

			if (counter.find(hashv) == counter.end()) {
				counter[hashv] = 1;
			} else if (counter[hashv] == 1) {
				result.push_back(s.substr(i-9, 10));
				counter[hashv] = 2;
			}
		}
		return result;
	}
};
