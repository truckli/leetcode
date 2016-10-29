class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {//do BFS traversal
    	if (beginWord == endWord) return 1;
    	unordered_set<string> accessed = {beginWord};//visited words
    	vector<string> current(1, beginWord);//current level
    	int level = 1;
		while (!current.empty()) {
			level++;
			vector<string> next;//next level
			for (auto cur : current) {
				for (int i = 0; i < cur.size(); ++i) {
					for (char c = 'a'; c <= 'z'; ++c) {
					    if (c == cur[i]) continue;
						swap(cur[i], c);
						if (!accessed.count(cur) && wordList.count(cur)) {
							if (cur == endWord) return level;
							next.push_back(cur);
							accessed.insert(cur);
						}
						swap(cur[i], c);//revert
					}
				}

			}
			swap(next, current);
		}
		return 0;
	}
};


