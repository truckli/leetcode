class Solution {
	vector<string> result;
	vector<string> path;
	void construct_line(string &s, int size, vector<vector<bool>> &g) {
		if (size == 0) {
			string line;
			for (auto it = path.rbegin(); it != path.rend(); ++it) {
				line += *it + ' ';
			}
			line.erase(line.end()-1);
			result.push_back(line);
			return;
		}

		for (int j = 0; j < size; ++j) {
			if (g[size][j]) {
				path.push_back(s.substr(j, size-j));
				construct_line(s, j, g);
				path.pop_back();
			}
		}
	}
public:
	vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
		int n = s.size();
		vector<vector<bool>> g(n+1, vector<bool>(n+1, false));
		vector<bool> f(n+1, false);
		f[0] = true;

		for (int i = 1; i <= n; ++i) {
			for (int j = 0; j < i; ++j) {
				if (wordDict.find(s.substr(j, i-j)) != wordDict.end() && f[j]) {
					g[i][j] = true;
					f[i] = true;
				}
			}
		}

		construct_line(s, n, g);
		return result;
	}
};
