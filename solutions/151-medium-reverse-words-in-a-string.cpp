class Solution0 {
public:
    void reverseWords(string &s) {
        stack<string> st;
        int i = 0;

        while (true) {
            while (s[i] == ' ') i++;
            if (i >= s.size()) break;
        	int j = s.find(' ', i);
        	if (j == string::npos) {
        		st.push(s.substr(i));
        		break;
        	} else {
        		st.push(s.substr(i, j-i));
        		i = j + 1;
        	}
        }

        s.clear();
        while (!st.empty()) {
            s += st.top() + ' ';
            st.pop();
        }
        if (!s.empty()) s.erase(s.end()-1);
    }
};

class Solution {
public:
    void reverseWords(string &s) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') continue;
            int pos = i;
            while (i < s.length() && s[i] != ' ') i++;
            if (result.length() > 0) result = ' ' + result;
            result = s.substr(pos, i - pos) + result;
        }
        s = result;
    }
};
