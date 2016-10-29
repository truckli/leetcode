class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        auto it = path.begin();
        while (it != path.end()) {
            it++;
            auto jt = find(it, path.end(), '/');
            if (jt == it) continue;
            string level = string(it, jt);
            if (level == "..") {
                if (st.size()) st.pop_back();
            } else if (level != ".") {
                st.push_back(level);
            }
            it = jt;
        }
        string result;
        for (auto level : st) {
            result += "/" + level;
        }
        if (result.empty()) result = "/";
        return result;
    }
};
