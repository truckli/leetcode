class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if (n < 2) return 0;
        stack<int> lefts;
        int lvp = 0;
        int last = -1;//last unmatched right brace
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                lefts.push(i);//i is last unmatched left brace
            } else if (lefts.size()) {
                lefts.pop();
                if (lefts.empty())
                    lvp = max(lvp, i - last);
                else
                    lvp = max(lvp, i - lefts.top());
            } else {
                last = i;
            }
        }
        return lvp;
    }
};

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if (n < 2) return 0;
        vector<int> f(n, 0);
        int lvp = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] == '(') continue;
            int match = i - 1 - f[i-1];
            if (match >= 0 && s[match] == '(') {
                f[i] = f[i-1] + 2;
                if (match > 0) {
                    f[i] += f[match];
                }
                lvp = max(lvp, f[i]);
            }
        }
        return lvp;
    }
};

