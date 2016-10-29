class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return string();

        int i = 0;
        bool stop = false;
        while (i < strs[0].size()) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    stop = true;
                    break;
                }
            }
            if (stop) break;
            i++;
        }
        return strs[0].substr(0, i);
    }
};
