class Solution1 {
public:
    bool isScramble(string s1, string s2) {
        if (s1 == s2) return true;
    	if (s1.size() != s2.size()) return false;


    	map<char, int> counts;
    	for (auto c:s1) {
    	    if (counts.find(c) == counts.end()) counts[c] = 1;
    	    else counts[c] += 1;
    	}
    	for (auto c:s2) {
    	    if (counts.find(c) == counts.end()) return false;
    	    else counts[c] -= 1;
    	}
    	for (auto p:counts)
    	    if (p.second != 0) return false;

    	int n = s1.size();
    	for (int i = 1; i < n; ++i) {
    		if (isScramble(s1.substr(0, i), s2.substr(0, i)) &&  isScramble(s1.substr(i, n-i), s2.substr(i, n-i))) return true;
    		if (isScramble(s1.substr(0, i), s2.substr(n-i, i)) &&  isScramble(s1.substr(i, n-i), s2.substr(0, n-i))) return true;
    	}
    	return false;
    }
};

typedef tuple<int, int, int> TupleInt3;
namespace std {
    template<> struct hash<TupleInt3> {
        size_t operator()(const TupleInt3 &key) const {
            int i1, i2, i3;
            tie(i1, i2, i3) = key;
            return (i1 * 367 + i2) * 367 + i3;
        }
    };
}

class Solution2 {
	unordered_map<TupleInt3, bool> memo;
    bool isScramble(string s1, string s2, int start1, int start2, int len) {
    	string sub1 = s1.substr(start1, len), sub2 = s2.substr(start2, len);
    	auto key = make_tuple(start1, start2, len);
    	if (sub1 == sub2) {
    		memo[key] = true;
    		return true;
    	}
    	if (memo.find(key) == memo.end()) {
    		for (int cut = 1; cut < len; ++cut) {
    			if (isScramble(s1, s2, start1, start2, cut) && isScramble(s1, s2, start1+cut, start2+cut, len-cut)) {
    				memo[key] = true;
    				return true;
    			}
    			if (isScramble(s1, s2, start1, start2+len-cut, cut) && isScramble(s1, s2, start1+cut, start2, len-cut)) {
    				memo[key] = true;
    				return true;
    			}
    		}
    		memo[key] = false;
    	}
    	return memo[key];
    }
public:
    bool isScramble(string s1, string s2) {
    	if (s1.size() != s2.size()) return false;
    	return isScramble(s1, s2, 0, 0, s1.size());
    }
};

//Dynamic programming method
class Solution {
public:
    bool isScramble(string s1, string s2) {
    	if (s1 == s2) return true;
    	if (s1.size() != s2.size()) return false;
    	int n = s1.size();
    	//dpmap: length, start1, start2
    	vector<vector<vector<bool>>> dpmap(n+1, vector<vector<bool>>(n, vector<bool>(n, false)));
    	for (int i = 0; i < n; ++i) {
    		for (int j = 0; j < n; ++j) {
    			dpmap[1][i][j] = s1[i] == s2[j];
    		}
    	}

    	for (int k = 1; k <= n; ++k) {
    		for (int i = 0; i <= n-k; ++i) {
    			for (int j = 0; j <= n-k; ++j) {
    				for (int c = 1; c < k; ++c) {//first half cut, 1,2,...,k-1
    					if ((dpmap[c][i][j]&&dpmap[k-c][i+c][j+c]) || (dpmap[c][i][j+k-c]&&dpmap[k-c][i+c][j])) {
    						dpmap[k][i][j] = true;
    						break;
    					}
    				}
    			}
    		}
    	}

    	return dpmap[n][0][0];
    }
};

