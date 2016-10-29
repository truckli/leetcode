//Manacher’s algorith takes O(n) time but is too complex for a coding interview.
//Here is a O(n^2) algorithm
class Solution {
    int lp2(string s, int &pos1, int &pos2) {
        while (true) {
            pos1--, pos2++;
            if (pos1 < 0 || pos2 >= s.size() || s[pos1] != s[pos2]) break;
        }
        pos1++, pos2--;
        return pos2 - pos1 + 1;
    }
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1) return s;
        int max_plen = 1, max_pos = 0;
        for (int i = 1; i < s.size() - 1; ++i) {
            int pos1 = i, pos2 = i;
            if (lp2(s, pos1, pos2) > max_plen) {
                max_pos = pos1;
                max_plen = pos2 - pos1 + 1;
            }
        }
        for (int i = 1; i < s.size(); ++i) {
            int pos1 = i, pos2 = i-1;
            if (lp2(s, pos1, pos2) > max_plen) {
                max_pos = pos1;
                max_plen = pos2 - pos1 + 1;
            }
        }
        return s.substr(max_pos, max_plen);
    }
};
