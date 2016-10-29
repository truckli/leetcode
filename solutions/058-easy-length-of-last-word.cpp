class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int end = s.size() - 1;
        while (end >= 0 && s[end] == ' ') end--;
        for (int i = 0; i <= end; ++i) {
            if (s[i] == ' ') {
                count = 0;
            } else {
                count++;
            }
        }
        return count;
    }
};
