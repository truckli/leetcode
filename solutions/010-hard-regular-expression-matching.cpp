class Solution {
    bool isMatch(string s, int starts, string p, int startp, char prev) {
        if (prev) {
            if (starts < s.size() && (s[starts] == prev || prev == '.')) 
                return isMatch(s, starts+1, p, startp, prev) || isMatch(s, starts, p, startp, 0);
            return isMatch(s, starts, p, startp, 0);
        }
        //not in prev state
        
        //no more pattern char
        if (startp == p.size()) {
            if (starts == s.size()) return true;
            return false;
        }

        if (startp+1 < p.size() && p[startp+1] == '*') {
            return isMatch(s, starts, p, startp+2, p[startp]);
        }
        //next pattern is not '*'. current pattern char is real char
        
        if (starts < s.size() && (s[starts] == p[startp] || p[startp] == '.')) return isMatch(s, starts+1, p, startp+1, 0);
        return false;
    }
public:
    bool isMatch(string s, string p) {
        return isMatch(s, 0, p, 0, 0);
    }
};
