class Solution {
private:
	void splitVersion(const string &version, vector<int> &subs) {
		int start = 0;
		while (true) {
			auto pos = version.find('.', start);
			subs.push_back(stoi(version.substr(start, pos)));
			if (pos == string::npos || pos == version.size()-1) break;
			start = pos + 1;
		}
	}
public:
	int compareVersion(string version1, string version2) {
		vector<int> subs1, subs2;
		splitVersion(version1, subs1);
		splitVersion(version2, subs2);
		for (auto i = 0; i < subs1.size()|| i < subs2.size(); ++i) {
			int part1 = 0, part2 = 0;
			if (i < subs1.size()) part1 = subs1[i];
			if (i < subs2.size()) part2 = subs2[i];
			if (part1 > part2) return 1;
			if (part1 < part2) return -1;
		}
		return 0;
	}
};
