class Solution {
	bool is_digit(char c) { return c >= '0' && c <= '9'; }
	bool isFloat(string::iterator start, string::iterator end) {
		if (start == end) return false;
		if (*start == '+' || *start == '-') ++start;
		bool dot = false, digit = false;
		while (start != end) {
			if (*start == '.') {
				if (dot) return false;
				dot = true;
			} else if (!is_digit(*start)) {
				return false;
			} else
				digit = true;
			start++;
		}
		return digit;
	}
	bool isInt(string::iterator start, string::iterator end) {
		if (start == end) return false;
		if (*start == '+' || *start == '-') ++start;
		if (start == end) return false;
		while (start != end) {
			if (!is_digit(*start++)) {
				return false;
			}
		}
		return true;
	}
public:
    bool isNumber(string s) {
    	auto start = s.begin();
    	while (start != s.end() && *start == ' ') ++start;
    	if (start== s.end()) return false;

    	auto end = s.end() - 1;
    	while (*end == ' ') --end;
    	if (start == end) return is_digit(*start);
    	end++;

    	auto eit = find(start, end, 'e');
    	if (eit == end)
    		return isFloat(start, end);
    	else
    		return isFloat(start, eit) && isInt(eit+1, end);
    }
};




class Solution {
	enum States {
		S_INIT,
		S_SIGN,
		S_D0,//prefixing digits before dot
		S_DOT,//a prefixing dot
		S_D_DOT,//both digit and dot: 3., 3,5, .5,
		S_EXP,
		S_SIGN2,
		S_D2,
		S_SPACE2,
		S_ILL,
		NUM_S,
	};
	enum Inputs {
		SPACE, SIGN, DIGIT, DOT, EXPONENT, NUM_INPUT,
	};
	const int transition[NUM_S][NUM_INPUT] = {
			{ S_INIT, S_SIGN, S_D0, S_DOT, S_ILL},//S_INIT,
			{ S_ILL, S_ILL, S_D0, S_DOT, S_ILL},//S_SIGN,
			{ S_SPACE2, S_ILL, S_D0, S_D_DOT, S_EXP},//S_D0,
			{ S_ILL, S_ILL, S_D_DOT, S_ILL, S_ILL},//S_DOT,
			{ S_SPACE2, S_ILL, S_D_DOT, S_ILL, S_EXP},//S_D_DOT,
			{ S_ILL, S_SIGN2, S_D2, S_ILL, S_ILL},//S_EXP,
			{ S_ILL, S_ILL, S_D2, S_ILL, S_ILL},//S_SIGN2,
			{ S_SPACE2, S_ILL, S_D2, S_ILL, S_ILL},//S_D2,
			{ S_SPACE2, S_ILL, S_ILL, S_ILL, S_ILL},//S_SPACE2,
	};
public:
    bool isNumber(string s) {
    	int state = S_INIT;
    	for (auto c : s) {
    		int input;
    		if (c == '+' || c == '-')
    			input = SIGN;
    		else if (c == '.')
    			input  = DOT;
    		else if (c >= '0' && c <= '9')
    			input = DIGIT;
    		else if (c == ' ')
    			input = SPACE;
    		else if (c == 'e')
    			input = EXPONENT;
    		else
    			return false;

    		state = transition[state][input];
    		if (state == S_ILL) return false;
    	}
    	return (state == S_D0 || state == S_D_DOT || state == S_D2 || state == S_SPACE2);
    }
};

