class Solution {
public:
    string largestNumber(vector<int>& nums) {
    	vector<string> vals;
    	for (auto num : nums) vals.push_back(to_string(num));
    	sort(begin(vals), end(vals), [](string &s1, string &s2) { return s1+s2 > s2+s1;});
    	string result = accumulate(begin(vals), end(vals), string(""));
    	if (result.size() == 0 || result[0] == '0') return "0";
    	return result;
    }
};
