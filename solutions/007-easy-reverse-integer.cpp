/*
 * How do we handle a negative input? Some solutions just ignore the concern and seems to work. But actually i think whether this works is platform-dependent.
 * To be more specific, it depends on the result of a negative mod operation, which is unspecified in the C standard. In my machine, -3 % 10 == -3, and as a result 
 * even if input sign is not considered the implementation can still works. 
 * But in python, -3 % 10 == 7, and this is obviously not what we want since we rely on the modoperation to get the least significant digit.
 */


//You are here! 
//Your runtime beats 3.92% of cpp submissions.
//One way to detect overflow: use longer integers
class Solution {
public:
    int reverse(int x) {
        bool negative;
        if (x < 0) {
            negative = true;
            x = -x;
        } else {
            negative = false;
        }

        long long val = 0;//in case for overflow
        while (x) {
            val = val *  10 + x % 10;
            x /= 10;
        }
        
        if (negative) val = -val;
        if (val > INT_MAX || val < INT_MIN) return 0;
        return (int)val;
    }
};

//8ms
//Your runtime beats 24.74% of cpp submissions.
//Second way to detect overflow: reversible after a multiplication and division
class Solution {
  public:
      int reverse(int x) {
          if (x == INT_MIN) return 0;
          if (abs(x) < 10)  return x;//note abs(INT_MIN) is still a negative INT_MIN
          bool negative;
          if (x < 0) {
              negative = true;
              x = -x;
          } else {
              negative = false;
          }
          
          int val = 0;
          int prev = 0;
          while (x) {
              prev = val;
              val = val * 10 + x % 10;
              x /= 10;
          }

          if (val/10 != prev) return 0;
          if (negative) val = -val;
          return (int)val;
      }
  };

//Third way to detect overflow: before timing 10, check if larger than INT_MAX/10
class Solution {
  public:
      int reverse(int x) {
          if (x == INT_MIN) return 0;//will overflow, and cannot get its abstract value
          bool negative;
          if (x < 0) {
              negative = true;
              x = -x;
          } else {
              negative = false;
          }
          
          int val = 0;
          while (x) {
              int digit = x % 10; 
              x /= 10;
              if (val > INT_MAX/10 || (val == INT_MAX/10 && digit > INT_MAX%10)) return 0;//overflow
              val = val * 10 + digit;
          }

          if (negative) val = -val;
          return val;
      }
  };


