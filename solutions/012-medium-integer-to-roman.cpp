class Solution {
    string digitToRoman(int digit, int weight) {
        if (weight == 1) {
            const char *roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
            return string(roman[digit]);
        }
        if (weight == 10) {
            const char *roman[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
            return string(roman[digit]);
        }
        if (weight == 100) {
            const char *roman[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
            return string(roman[digit]);
        }
        const char *roman[] = {"", "M", "MM", "MMM"};
        return string(roman[digit]);
    }
public:
    string intToRoman(int num) {
        string result;
        result.append(digitToRoman(num/1000, 1000));
        num %= 1000;
        result.append(digitToRoman(num/100, 100));
        num %= 100;
        result.append(digitToRoman(num/10, 10));
        num %= 10;
        result.append(digitToRoman(num, 1));
        return result; 
    }
};
