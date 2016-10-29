//primary school formations
class Solution {
    char mul_digit(char v1, char v2, int &counter) {
        int mul = (v1-'0') * (v2-'0') + counter;
        counter = mul / 10;
        return '0' + mul % 10;
    }

    string mul_digit_string(const str &str, char v) {
        string result;
        int i = 0;
        int counter = 0;
        while (i < str.size() || counter) {
           result += mul_digit(str[i++], v, counter);
        }
        return result;
    }

    char add_digit(char v1, char v2, int &counter) {
        int mul = (v1-'0') + (v2-'0') + counter;
        counter = mul / 10;
        return '0' + mul % 10;
    }

    string add_string(const string &s1, const string &s2) {
        int counter = 0;
        int i1 = 0, i2 = 0;
        string result;
        while (i1 < s1.size() || i2 < s2.size() || counter) {
            char v1 = i1 < s1.size() ? num1[i1++] : '0';
            char v2 = i2 < s2.size() ? num2[i2++] : '0';
            result += add_digit(v1, v2, counter);
        }
        return result;
    }

public:
    string multiply(string num1, string num2) {
        if (num1.empty() || num2.empty()) return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string result = "0";
        string shift = "";
        for (int i = 0; i < num2.size(); ++i) {
            string line = shift + mul_digit_string(num1, num2[i]);
            result += line;
            shift += "0";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};


//shorter implementation
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1.empty() || num2.empty()) return "0";
        int n = num1.size(), m = num2.size();
        vector<int> val1, val2, product(n+m);
        auto to_val = [](char c){ return c-'0';};
        transform(num1.rbegin(), num1.rend(), back_inserter(val1), to_val);
        transform(num2.rbegin(), num2.rend(), back_inserter(val2), to_val);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                product[i+j] += val1[i] * val2[j];
                product[i+j+1] += product[i+j] / 10;
                product[i+j] %= 10;
            }
        }
        string result;
        auto to_char = [](int v){ return '0'+v; };
        auto no_zero = [](int v){ return v > 0; };
        transform(find_if(product.rbegin(), prev(product.rend()), no_zero), product.rend(), back_inserter(result), to_char);
        return result;
    }
};








