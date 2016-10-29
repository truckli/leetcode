class Solution {
public:
    string getPermutation(int n, int k) {
       string str(n, '1');
       for (int i = 1; i < n; ++i) str[i] = '1' + i;
       int factorial = 1;
       for (int i = 1; i <= n; ++i) factorial *= i;
       k = (k-1) % factorial;
       for (int i = 0; i < n; ++i) {
    	   factorial /= (n-i);
    	   int j = i + k / factorial;
    	   char c = str[j];
    	   copy_backward(str.begin()+i, str.begin()+j, str.begin()+j+1);
    	   str[i] = c;
    	   k %= factorial;
       }

       return str;
    }
};
