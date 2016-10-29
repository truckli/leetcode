#include "debug-helper.h"

class Solution {
public:
    string addBinary(string a, string b) {
        int counter = 0;
        int ap = a.size() - 1, bp = b.size() - 1;
        string result = "";
        for (; ap >= 0 || bp >= 0; --ap, --bp) {
            int x = (ap >= 0)?(a[ap] - '0'):0;
            int y = (bp >= 0)?(b[bp] - '0'):0;
            int sum = x + y + counter;
            counter = (sum & 0x2) >> 1;
            sum = sum & 0x1;
            result = char('0'+sum) + result;;
        }
        if (counter) result = char('1') + result;
        return result;
    }
};

int main()
{
    Solution sol;
    cout << sol.addBinary("11", "1") << endl;
    return 0;
}
