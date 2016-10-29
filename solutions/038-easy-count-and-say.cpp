class Solution {
public:
    string countAndSay(int n) {
        string present = "1";
        while (--n) {
            stringstream next;
            int count = 1;
            for (int i = 1; i < present.size(); ++i) {
                if (present[i] != present[i-1]) {
                    next << count << present[i-1];
                    count = 1;
                } else {
                    count++;
                }
            }
            next << count << present[present.size()-1];
            present = next.str();
        }
       return present;
    }
};
