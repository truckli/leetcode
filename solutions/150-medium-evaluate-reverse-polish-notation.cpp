class Solution {
private:
	bool is_operator(const string &token) {
		return token.size() == 1 && string("+-*/").find(token) != string::npos;
	}
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for (auto t : tokens) {
        	if (is_operator(t)) {
        		int y = stoi(s.top());
        		s.pop();
        		int x = stoi(s.top());
        		s.pop();
        		if (t == "+") x += y;
        		else if (t == "-") x -= y;
        		else if (t == "*") x *= y;
        		else x /= y;
        		s.push(to_string(x));
        	} else {
        		s.push(t);
        	}
        }
        return stoi(s.top());
    }
};
