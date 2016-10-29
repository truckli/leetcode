/*
I	1
V	5
X	10
L	50
C	100
D	500
M	1,000

http://romannumerals.babuo.com/roman-numerals-1-5000
*/

class Solution {
    int letter2val(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
public:
    int romanToInt(string s) {
        int value = 0;
        for (int i = 0; i < s.size();) {            
            int j = i + 1;
            int vali = letter2val(s[i]);
            int valj = j < s.size() ? letter2val(s[j]) : 0;
            if (vali < valj) {
                value += (valj - vali);
                i += 2;
            } else {
                value += vali;
                i += 1;
            }
        }
        return value;
    }
};