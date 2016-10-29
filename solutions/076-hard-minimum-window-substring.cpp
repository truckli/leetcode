class Solution {
public:
    string minWindow(string s, string t) {
    	if (t.empty()) return "";
    	unordered_map<char, int> occurrence_t;//occurence in t
    	unordered_map<char, int> occurrence_s;//occurence in s
    	for (auto c:t) {
    		if (occurrence_t.find(c) != occurrence_t.end())
    			occurrence_t[c] += 1;
    		else {
    			occurrence_t[c] = 1;
    			occurrence_s[c] = 0;
    		}
    	}
    	int absent_count = t.size();

    	int start = 0, end = 0;
    	string best_answer = "";
    	int shortest = INT_MAX;

    	while (true) {
			if  (absent_count > 0) {
				if (end == s.size()) break;
				char c = s[end];
				if (occurrence_t.find(c) != occurrence_t.end()) {
					occurrence_s[c]++;
					if (occurrence_s[c] <= occurrence_t[c]) {
                        absent_count--;
					}
				}
				end++;
			} else {
				char c = s[start];
				if (occurrence_t.find(c) != occurrence_t.end()) {
					if (occurrence_s[c] == occurrence_t[c]) {
						if (end - start < shortest) {
							shortest = end - start;
							best_answer = s.substr(start, shortest);
						}
						absent_count++;
					}
					occurrence_s[c]--;
				}
				start++;
			}
		}
    	return best_answer;
    }
};

class Solution {
public:
    string minWindow(string s, string t) {
    	//if (t.empty()) return "";
    	unordered_map<char, int> missing;//number of chars in short to contain all t
    	for (auto c:t) {
    		if (missing.find(c) != missing.end())
    			missing[c] += 1;
    		else {
    			missing[c] = 1;
    		}
    	}
    	int absent_count = t.size();

    	int start = 0, end = 0;//s[start, end) is the current window in consideration
    	string best_answer = "";
    	int shortest = INT_MAX;

    	while (true) {
			if  (absent_count > 0) {
				if (end == s.size()) break;
				char c = s[end];
				if (missing.find(c) != missing.end()) {
					if (missing[c] > 0) /* moving end forward will take in one extra s[end] in need*/{
                        absent_count--;
					}
					missing[c]--;/*can be negative if more s[end] than needed are taken in*/
				}
				end++;
			} else {
				char c = s[start];
				if (missing.find(c) != missing.end()) {
					if (missing[c] == 0) /* start++ means s[start,end) will be in short of one c */{
						if (end - start < shortest) {
							shortest = end - start;
							best_answer = s.substr(start, shortest);
						}
						absent_count++;
					}
					missing[c]++;
				}
				start++;
			}
		}
    	return best_answer;
    }
};
