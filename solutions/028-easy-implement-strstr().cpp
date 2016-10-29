#include <stdint.h>
#include <iostream>
#include <limits.h>
#include <vector>
#include <stack>
#include <iterator>
#include <math.h>
#include "debug-helper.h" 

using namespace std;

class Solution_kmp {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        if (n < m) return -1;

        vector<int> transition(m);
        transition[0] = -1;
        int j = -1;
        for (int i = 1; i < m; ) {
            if (needle[i] == needle[j+1]) {
                transition[i++] = j + 1;
                j++;
            } else {
                if (j >= 0) {
                    j = transition[j]; 
                } else {
                    transition[i++] = -1;
                }
            }
        }
        
        j = -1;
        for (int i = 0; i < n; ) {
            if (haystack[i] == needle[j+1]) {
                j++;
                i++;
                if (j == m - 1) return (i - m);
            } else {
                if (j >= 0) {
                    j = transition[j]; 
                } else {
                    i++;
                }
            }
        }
        return -1;
    }
};

//BM ALGORITHM: timeout for long pattern
class Solution_bm {
public:
    //if needle[pos::] is a prefix of needle
    bool is_prefix(const string &needle, int pos) {
        for (int i = 0; i < needle.size() - pos; ++i) {
            if (needle[i] != needle[pos+i]) return false;
        }
        return true;
    }
    
    // length of longest suffix ending at pos
    int suffix_len(const string &needle, int pos) {
        int i;
        for (i = 0; i <= pos && (needle[needle.size()-1-i] == needle[pos-i]); i++);
        return i;
    }

    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        if (m > 1024) {
            Solution_kmp sol;
            return sol.strStr(haystack, needle);
        }
        
        vector<int> bad_char_appearance(256, -1);
        vector<int> bad_char_table_template(256, m);
        vector<vector<int> > bad_char_table(m, bad_char_table_template);
        vector<int> good_suffix_table(m, m);
        for (int j = 0; j < m; ++j) {
            bad_char_appearance[needle[j]] = j;
            for (int c = 0; c < 256; ++c)
                bad_char_table[j][c] = j - bad_char_appearance[c];
        }

        int last_prefix = m;
        for (int j = m - 1; j >= 0; --j) {
            if (is_prefix(needle, j)) last_prefix = j;
            good_suffix_table[j] = last_prefix;
        }

        for (int j = 0; j < m; ++j) {
            int slen = suffix_len(needle, j);
            if (needle[m-1-slen] != needle[j-slen])
                good_suffix_table[m-1-slen] = m-1-j;
        }


        if (n < m) return -1;
        int s = 0;//shift
        while (s <= n - m) {
            int p = m - 1;
            while (p >= 0 && needle[p] == haystack[s+p]) {
                p--;
            }
            if (p < 0) return s; 
            s += max(bad_char_table[p][haystack[s+p]], good_suffix_table[p]);
        }

        return -1;
    }
};

//rabin-karp
class Solution_rk {
    uint32_t genhash(string str, int start, int len) {
        uint32_t key = 0;
        for (int i = start; i < start + len && i < str.size(); ++i) {
            key = key * 101 + (uint32_t)str[i];
        }
        return key;
    }
    public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        uint32_t needle_hash = genhash(needle, 0, m);
        uint32_t large_base = 1;
        uint32_t hay_hash = genhash(haystack, 0, m-1);
        for (int i = 1; i < m; ++i) large_base *= 101;
        for (int j = 0; j <= n-m; ++j) {
            hay_hash = hay_hash * 101 + (uint32_t)haystack[j+m-1];
            if (needle_hash == hay_hash) {
                int k;
                for (k = 0; k < m; ++k) {
                    if (needle[k] != haystack[j+k]) break;
                }
                if (k == m) return j;
            }
            hay_hash -= large_base * (uint32_t)haystack[j];
        }
        return -1;
    }
};

//BM, timeout during good-suffix-rule generation(is_prefix() timeout, with long patterns with almost all identical characters)
//fix: switch to Horspool for large patterns
class Solution_bm2 {
public:
    //if needle[pos::] is a prefix of needle
    bool is_prefix(const string &needle, int pos) {
        for (int i = 0; i < needle.size() - pos; ++i) {
            if (needle[i] != needle[pos+i]) return false;
        }
        return true;
    }
    
    // length of longest suffix ending at pos
    int suffix_len(const string &needle, int pos) {
        int i;
        for (i = 0; i <= pos && (needle[needle.size()-1-i] == needle[pos-i]); i++);
        return i;
    }

    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        bool horspool = false;
        if (m > 10240) horspool = true;
        
        vector<int> bad_char_table(256, m);
        for (int j = 0; j < m; ++j) {
            bad_char_table[needle[j]] = m - 1 - j;
        }

        if (horspool) {
            int s = 0;//shift
            while (s <= n - m) {
                int p = m - 1;
                while (p >= 0 && needle[p] == haystack[s+p]) {
                    p--;
                }
                if (p < 0) return s; 
                s += bad_char_table[haystack[s+m-1]];
            }
        } else {
            vector<int> good_suffix_table(m, m);
            int last_prefix = m;
            for (int j = m - 1; j >= 0; --j) {
                good_suffix_table[j] = last_prefix;
                if (is_prefix(needle, j)) last_prefix = j;
            }

            for (int j = 0; j < m - 1; ++j) {
                int slen = suffix_len(needle, j);
                if (needle[m-1-slen] != needle[j-slen])
                    good_suffix_table[m-1-slen] = m-1-j;
            }

            int s = 0;//shift
            while (s <= n - m) {
                int p = m - 1;
                while (p >= 0 && needle[p] == haystack[s+p]) {
                    p--;
                }
                if (p < 0) return s; 
                s += max(bad_char_table[haystack[s+p]] - (m-1-p), good_suffix_table[p]);
            }
        }

        return -1;
    }
};



int main()
{
    Solution_bm2 solution;
    string haystack(32316, 'a');
    string needle(32316, 'a');
    needle[32315] = 'b';
    assert(solution.strStr(haystack, needle) == -1);
    assert(solution.strStr("aaaa", "baaa") == -1);
    assert(solution.strStr("babbbbaaabbbaaa", "bbbb") == 2);
    assert(solution.strStr("aaaaaaa", "aaab") == -1);
    assert(solution.strStr("mississipi", "ississipi") == 1);
    assert(solution.strStr("mississippi", "ississipi") == -1);
    return 0;
}



