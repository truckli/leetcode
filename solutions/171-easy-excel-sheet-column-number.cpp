//16ms
class Solution {
public:
    int titleToNumber(string s) {
        int val = 0;
        for (auto i = s.begin(); i != s.end(); ++i) {
            val *= 26;
            val += (*i - 'A' + 1);
        }
        return val;
    }
};
