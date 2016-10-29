class Solution0 {//this solution is slow, and would time-out
public:
	vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
		vector<vector<string>> current {vector<string>{beginWord}}, next, results;
		if (beginWord == endWord) return results;
		unordered_set<string> accessed = {beginWord}; //visited words
		bool found = false;
		while (!current.empty()) {
			for (auto path: current) {
				string cur = path.back();
				for (int i = 0; i < cur.size(); ++i) {
					for (char c = 'a'; c <= 'z'; ++c) {
						if (c == cur[i]) continue;
						swap(cur[i], c);
						if (!accessed.count(cur) && wordList.count(cur)) {
							path.push_back(cur);
							accessed.insert(cur);
							if (cur == endWord) {
								found = true;
								results.push_back(path);
							} else {
                                next.push_back(path);
							}
						}
						swap(cur[i], c); //revert
					}
				}
			}
			if (found) return results;
			current.clear();
			swap(next, current);
		}
		return results;

	}
};

class Solution { //2-end BFS
public:
	vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
		if (beginWord == endWord) {
			results.push_back(vector<string>{beginWord});
			return results;
		}

		dict = wordList;
		unordered_set<string> from{beginWord}, to{endWord};
		if (search(from, to, false)) {
			vector<string> path_prefix{beginWord};
			generate_path(beginWord, endWord, path_prefix);
		}

		return results;
	}
private:
	map<string, vector<string>> adjacent;
	vector<vector<string>> results;
	unordered_set<string> dict;
	void generate_path(string &currWord, string &endWord, vector<string> &path_prefix) {
		if (currWord == endWord) {
			results.push_back(path_prefix);
		}

		for (auto nextWord : adjacent[currWord]) {
			path_prefix.push_back(nextWord);
			generate_path(nextWord, endWord, path_prefix);
			path_prefix.pop_back();
		}
	}

	bool search(unordered_set<string> &from, unordered_set<string> &to, bool is_reverse) {
		if (from.empty()) return false;
		bool found = false;
		for (auto word : from) { dict.erase(word); }
		for (auto word : to) { dict.erase(word); }
		if (from.size() > to.size()) {
			return search(to, from, !is_reverse);
		}

		unordered_set<string> intermediate;
		for (auto word : from) {
			string evolve = word;
			int nchar = evolve.size();
			for (int i = 0; i < nchar; ++i) {
				char save = evolve[i];
				for (char c = 'a'; c <= 'z'; c++) {
					if (c == save) continue;
					evolve[i] = c;
					if (to.count(evolve)) {
						found = true;
						is_reverse ? adjacent[evolve].push_back(word):adjacent[word].push_back(evolve);
					} else if (dict.count(evolve)) {
						intermediate.insert(evolve);
						is_reverse ? adjacent[evolve].push_back(word):adjacent[word].push_back(evolve);
					}
				}
				evolve[i] = save;
			}
		}

		return found || search(to, intermediate, !is_reverse);
	}

};























