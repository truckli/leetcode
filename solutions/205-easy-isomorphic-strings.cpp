class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, char> map, rmap;
        for (int i = 0; i < s.size(); ++i) {
            if (map.find(s[i]) == map.end()) {
                map[s[i]] = t[i];
            } else {
                if (map[s[i]] != t[i]) return false;
            }
            if (rmap.find(t[i]) == rmap.end()) {
                rmap[t[i]] = s[i];
            } else {
                if (rmap[t[i]] != s[i]) return false;
            }
        }

        return true;
    }
};
