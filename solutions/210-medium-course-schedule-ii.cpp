class Solution {
private:
    vector<int> result;
    bool dfs(int course, vector<unordered_set<int>> &nexts, vector<int> &color) {
		color[course] = 1;
		for (auto neibor : nexts[course]) {
			if (color[neibor] == 1) return false;
			if (color[neibor] == 2) continue;
			if (!dfs(neibor, nexts, color)) return false;
		}
		color[course] = 2;
		result.push_back(course);
		return true;
	}
public:
	vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
		vector<int> color(numCourses, 0); //0 for unvisited, 1 for during visit, 2 for visited
		vector<unordered_set<int>> nexts(numCourses); //all nodes that directly relies on it
		for (auto x : prerequisites) { nexts[x.second].insert(x.first); }

		for (auto i = 0; i < numCourses; ++i) {
			if (color[i]) continue;
			if (!dfs(i, nexts, color)) return vector<int>{};
		}
		reverse(result.begin(), result.end());
		return result;
	}
};
