class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> alphabet_count(256, false);
        int max_sublen = 0;
        int sublen = 0, subpos = 0;
        int i = 0;
        while (i < s.size()) {
            if (!alphabet_count[s[i]]) {
                alphabet_count[s[i++]] = true;
                sublen++;
            } else { //shift subpos by 1
                max_sublen = max(max_sublen, sublen--);//error prone: cannot just reset sublen to 0
                alphabet_count[s[subpos++]] = false;
            }
        }
        //error-prone: last segment
        max_sublen = max(max_sublen, sublen);
        return max_sublen;
    }
};
