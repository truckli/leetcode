//actually, there is no difference between zigzag and linear-backforth when is comes to this problem


//16ms
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || s.empty()) return s;
        string result;
        result.reserve(s.size());
         
        int period = 2 * numRows - 2;
        int mod, mod2;
        mod = 0;
        while (mod < s.size()) {
            result.push_back(s[mod]);
            mod += period;
        }

        for (int i = 1; i < numRows - 1; ++i) {
            mod = i;
            mod2 = period - i;
            while (mod < s.size()) {
                result.push_back(s[mod]);
                if (mod2 < s.size()) result.push_back(s[mod2]);
                mod += period;
                mod2 += period;
            }
        }

        mod = numRows - 1;
        while (mod < s.size()) {
            result.push_back(s[mod]);
            mod += period;
        }

        return result;
    }
};



//28ms solution from https://leetcode.com/discuss/57115/a-clear-and-straightforward-solution-in-c
// logging each step into the proper locations and later restore the path
class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows <= 1)
            return s;

        vector<string> row_strs(numRows);
        int row = 0;
        for (int i = 0; i < s.size(); i++) {
            row_strs[row] += s[i];
            if ((i / (numRows -1)) % 2 == 0 )
                row ++;
            else
                row --;
        }

        string result;
        for (string & str:row_strs)
            result += str;
        return result;

    }
};

//28ms
class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows <= 1)
            return s;

        vector<string> row_strs(numRows);
        string result;
        for (int i = 0; i < s.size(); ++i) {
            int mod = i % (2*numRows - 2);
            if (mod < numRows) {
                row_strs[mod].push_back(s[i]);
            } else {
                row_strs[2*numRows - 2 - mod].push_back(s[i]);
            }
        }
        
        for (int i = 0; i < numRows; ++i) {
            result.append(row_strs[i]);
        }
       
        return result;

    }
};