class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{'))  continue;
                return false;
            }
        }
        if (st.empty()) return true;
        return false;
    }
};
