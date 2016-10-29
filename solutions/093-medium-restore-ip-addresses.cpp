#include "testcases.h"

class Solution {
	bool valid_ip_part(string part) {
		if (part.size() < 1 || part.size() > 3) return false;
		if (part[0] == '0' && part.size()>1) return false;
		if (part.size() == 3) {
			int partval = (part[0]-'0') * 100 + (part[1]-'0') * 10 + part[2]-'0';
			if (partval > 255) return false;
		}
		return true;
	}
	void restore(string s, int pos, int step, string address, vector<string> &result) {
		if (step == 4) {
			string part = s.substr(pos);
			if (valid_ip_part(part)) {
				address.append(part);
				result.push_back(address);
				address.resize(address.size()-part.size());
			}
			return;
		}

		for (int partlen = 1; partlen <= 3; partlen++) {
			int newpos = pos + partlen;
			if (newpos >= s.size()) {
				break;
			}
			string part = s.substr(pos, partlen);
			if (valid_ip_part(part)) {
				address.append(part);
				address.append(".");
				restore(s, newpos, step+1, address, result);
				address.resize(address.size()-part.size()-1);
			}
		}

	}
public:
    vector<string> restoreIpAddresses2(string s) {
    	int n = s.size();
    	vector<string> result;
    	if (n < 4 || n > 12) return result;

    	string address;
    	restore(s, 0, 1, address, result);
    	return result;
    }

    vector<string> restoreIpAddresses(string s) {
    	int n = s.size();
    	vector<string> result;
    	if (n < 4 || n > 12) return result;

    	int cut1, cut2, cut3;
    	for (int cut1 = 1; cut1<=3; cut1++) {
    		int left = n - cut1;
    		if (left < 3 || left > 9) continue;
    		for (int cut2 = cut1+1; cut2 <= cut1+3; cut2++) {
    			int left = n - cut2;
    			if (left < 2 || left > 6) continue;
    			for (int cut3 = cut2+1; cut3<= cut2+3; cut3++) {
    				int left = n - cut3;
    				if (left < 1 || left > 3) continue;
    				string part1 = s.substr(0, cut1);
    				string part2 = s.substr(cut1, cut2-cut1);
    				string part3 = s.substr(cut2, cut3-cut2);
    				string part4 = s.substr(cut3, left);
    				if (valid_ip_part(part1) && valid_ip_part(part2) && valid_ip_part(part3) && valid_ip_part(part4))
    				{
    					string address = part1 + "." + part2 + "." + part3 + "." + part4;
    					result.push_back(address);
    				}
    			}
    		}
    	}
    	return result;
    }
};

extern int test() {
	string s = "1723030101";
	vector<string> results = Solution().restoreIpAddresses(s);
	for (auto r: results) {
		cout << r << endl;
	}
	return 0;
}
