class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counts(26);
        for (int i = 0; i < s.size(); ++i) {
            counts[s[i]-'a']++;
        }
        for (int i = 0; i < t.size(); ++i) {
            counts[t[i]-'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (counts[i]) return false;
        }
        return true;
    }
};


