class MinStack {
private:
	stack<int> vals;
	stack<int> minvals;
public:
    void push(int x) {
    	int curmin = INT_MAX;
    	if (!minvals.empty()) curmin = minvals.top();
    	if (x <= curmin) {
    		minvals.push(x);
    	}
    	vals.push(x);
    }

    void pop() {
    	int topval = vals.top();
    	if (topval == minvals.top()) minvals.pop();
    	vals.pop();
    }

    int top() {
    	return vals.top();
    }

    int getMin() {
    	if (minvals.empty()) return INT_MAX;
    	return minvals.top();
    }
};
