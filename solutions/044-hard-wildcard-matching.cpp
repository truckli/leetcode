//timeout
class Solution {
    bool isMatch(string s, int spos, string p, int ppos) {
        int n = s.size(), m = p.size();
        if (ppos == m) {
            if (spos == n) return true;
            return false;
        }
        if (spos == n) {
            for (int i = ppos; i < m; ++i) {
                if (p[i] != '*') return false;
            }
            return true;
        }

        if (p[ppos] == '?') return isMatch(s, spos+1, p, ppos+1);
        if (p[ppos] == '*') {
            if (isMatch(s, spos+1, p, ppos)) return true;
            if (isMatch(s, spos, p, ppos+1)) return true;
            return false;
        }

        return s[spos] == p[ppos] && isMatch(s, spos+1, p, ppos+1);
    }

public:
    bool isMatch(string s, string p) {
        return isMatch(s, 0, p, 0);
    }
};

//for patterns with more than one stars, i think more than one way of matching can be applied
//each star is like a spring
//if a mismatching occurs at a spring, only this spring has to be tuned (previous springs can be ignored)
class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        bool star = false;
        int si = 0, pi = 0;
        int s_begin, p_begin;
        while (true) {
            if (si == n) {
                for (; pi < m; ++pi) if (p[pi] != '*') return false;
                return true;
            }

            if (pi == m || (p[pi] != '?' && p[pi] != '*' && p[pi] != s[si])) {//not match
                if (!star) return false;
                s_begin++;
                si = s_begin;
                pi = p_begin;
            } else if (p[pi] == '*') {
                star = true;
                pi++;
                p_begin = pi;
                s_begin = si;
            } else {//exact match or '?' match
                pi++;
                si++;
            }
        }
    }
};
