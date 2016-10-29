class SolutionDfs1 {
private:
	bool dfs(int course, vector<pair<int, int>>& prerequisites, vector<int> &color) {
		color[course] = 1;
		for (auto x : prerequisites) {
			if (x.second == course) {
				if (color[x.first] == 1) return false;
				if (color[x.first] == 2) continue;
                if (!dfs(x.first, prerequisites, color)) return false;
			}
		}
		color[course] = 2;
		return true;
	}
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
    	vector<int> color(numCourses, 0);//0 for unvisited, 1 for during visit, 2 for visited
    	for (auto i = 0; i < numCourses; ++i) {
    		if (color[i]) continue;
    		if (!dfs(i, prerequisites, color)) return false;
    	}
    	return true;
    }
};

class SolutionDfs2 {//Just like SolutionDfs1, except the graph is transformed into another format
private:
	bool dfs(int course, vector<unordered_set<int>> &nexts, vector<int> &color) {
		color[course] = 1;
		for (auto neibor : nexts[course]) {
			if (color[neibor] == 1) return false;
			if (color[neibor] == 2) continue;
			if (!dfs(neibor, nexts, color)) return false;
		}
		color[course] = 2;
		return true;
	}
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
    	vector<int> color(numCourses, 0);//0 for unvisited, 1 for during visit, 2 for visited
    	vector<unordered_set<int>> nexts(numCourses);//all nodes that directly relies on it
    	for (auto x : prerequisites) { nexts[x.second].insert(x.first); }

    	for (auto i = 0; i < numCourses; ++i) {
    		if (color[i]) continue;
    		if (!dfs(i, nexts, color)) return false;
    	}
    	return true;
    }
};



class Solution : public SolutionDfs1 {};



