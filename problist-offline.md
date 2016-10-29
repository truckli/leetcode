# Problems:
## 1 Two Sum   
Problem url:<https://leetcode.com/problems/two-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/two-sum>    
Difficulty:  Medium(218.100000)   

```   
Given an array of integers, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

```   

```   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 2 Add Two Numbers   
Problem url:<https://leetcode.com/problems/add-two-numbers/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/add-two-numbers>    
Difficulty:  Medium(220.500000)   

```   
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
```   

---    
## 3 Longest Substring Without Repeating Characters   
Problem url:<https://leetcode.com/problems/longest-substring-without-repeating-characters/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-substring-without-repeating-characters>    
Difficulty:  Medium(220.300000)   

```   
Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
```   

```   
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    }
};
```   

---    
## 4 Median of Two Sorted Arrays   
Problem url:<https://leetcode.com/problems/median-of-two-sorted-arrays/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/median-of-two-sorted-arrays>    
Difficulty:  Hard(317.100000)   

```   
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
```   

```   
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```   

---    
## 5 Longest Palindromic Substring   
Problem url:<https://leetcode.com/problems/longest-palindromic-substring/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-palindromic-substring>    
Difficulty:  Medium(220.800000)   

```   
Given a string S, find the longest palindromic substring in S. You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.
```   

```   
class Solution {
public:
    string longestPalindrome(string s) {
        
    }
};
```   

---    
## 6 ZigZag Conversion   
Problem url:<https://leetcode.com/problems/zigzag-conversion/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/zigzag-conversion>    
Difficulty:  Easy(121.600000)   

```   

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R


And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

```   

```   
class Solution {
public:
    string convert(string s, int numRows) {
        
    }
};
```   

---    
## 7 Reverse Integer   
Problem url:<https://leetcode.com/problems/reverse-integer/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-integer>    
Difficulty:  Easy(123.500000)   

```   
Reverse digits of an integer.

Example1: x =  123, return  321
Example2: x = -123, return -321

click to show spoilers.
Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!
If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Update (2014-11-10):
Test cases had been added to test the overflow behavior.


```   

```   
class Solution {
public:
    int reverse(int x) {
        
    }
};
```   

---    
## 8 String to Integer (atoi)   
Problem url:<https://leetcode.com/problems/string-to-integer-atoi/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/string-to-integer-(atoi)>    
Difficulty:  Easy(112.800000)   

```   
Implement atoi to convert a string to an integer.
Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: 
It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front. 

Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button  to reset your code definition.

spoilers alert... click to show requirements for atoi.
Requirements for atoi:
The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.
The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.
If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
If no valid conversion could be performed, a zero value is returned. If the correct value is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.


```   

```   
class Solution {
public:
    int myAtoi(string str) {
        
    }
};
```   

---    
## 9 Palindrome Number   
Problem url:<https://leetcode.com/problems/palindrome-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-number>    
Difficulty:  Easy(128.900000)   

```   
Determine whether an integer is a palindrome. Do this without extra space.
click to show spoilers.
Some hints:
Could negative integers be palindromes? (ie, -1)
If you are thinking of converting the integer to string, note the restriction of using extra space.
You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?
There is a more generic way of solving this problem.

```   

```   
class Solution {
public:
    bool isPalindrome(int x) {
        
    }
};
```   

---    
## 10 Regular Expression Matching   
Problem url:<https://leetcode.com/problems/regular-expression-matching/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/regular-expression-matching>    
Difficulty:  Hard(320.700000)   

```   
Implement regular expression matching with support for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "a*") → true
isMatch("aa", ".*") → true
isMatch("ab", ".*") → true
isMatch("aab", "c*a*b") → true

```   

```   
class Solution {
public:
    bool isMatch(string s, string p) {
        
    }
};
```   

---    
## 11 Container With Most Water   
Problem url:<https://leetcode.com/problems/container-with-most-water/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/container-with-most-water>    
Difficulty:  Medium(232.000000)   

```   
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container.

```   

```   
class Solution {
public:
    int maxArea(vector<int>& height) {
        
    }
};
```   

---    
## 12 Integer to Roman   
Problem url:<https://leetcode.com/problems/integer-to-roman/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/integer-to-roman>    
Difficulty:  Medium(234.500000)   

```   
Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.
```   

```   
class Solution {
public:
    string intToRoman(int num) {
        
    }
};
```   

---    
## 13 Roman to Integer   
Problem url:<https://leetcode.com/problems/roman-to-integer/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/roman-to-integer>    
Difficulty:  Easy(134.700000)   

```   
Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
```   

```   
class Solution {
public:
    int romanToInt(string s) {
        
    }
};
```   

---    
## 14 Longest Common Prefix   
Problem url:<https://leetcode.com/problems/longest-common-prefix/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-common-prefix>    
Difficulty:  Easy(125.600000)   

```   
Write a function to find the longest common prefix string amongst an array of strings.

```   

```   
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    }
};
```   

---    
## 15 3Sum   
Problem url:<https://leetcode.com/problems/3sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/3sum>    
Difficulty:  Medium(217.000000)   

```   
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
Note:

Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
The solution set must not contain duplicate triplets.



    For example, given array S = {-1 0 1 2 -1 -4},

    A solution set is:
    (-1, 0, 1)
    (-1, -1, 2)

```   

```   
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
    }
};
```   

---    
## 16 3Sum Closest   
Problem url:<https://leetcode.com/problems/3sum-closest/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/3sum-closest>    
Difficulty:  Medium(227.100000)   

```   
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

    For example, given array S = {-1 2 1 -4}, and target = 1.

    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```   

```   
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 17 Letter Combinations of a Phone Number   
Problem url:<https://leetcode.com/problems/letter-combinations-of-a-phone-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/letter-combinations-of-a-phone-number>    
Difficulty:  Medium(225.700000)   

```   
Given a digit string, return all possible letter combinations that the number could represent.


A mapping of digit to letters (just like on the telephone buttons) is given below.


Input:Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].


Note:
Although the above answer is in lexicographical order, your answer could be in any order you want.

```   

```   
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
    }
};
```   

---    
## 18 4Sum   
Problem url:<https://leetcode.com/problems/4sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/4sum>    
Difficulty:  Medium(221.900000)   

```   
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
Note:

Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
The solution set must not contain duplicate quadruplets.



    For example, given array S = {1 0 -1 0 -2 2}, and target = 0.

    A solution set is:
    (-1,  0, 0, 1)
    (-2, -1, 1, 2)
    (-2,  0, 0, 2)

```   

```   
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 19 Remove Nth Node From End of List   
Problem url:<https://leetcode.com/problems/remove-nth-node-from-end-of-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-nth-node-from-end-of-list>    
Difficulty:  Easy(127.000000)   

```   
Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.


Note:
Given n will always be valid.
Try to do this in one pass.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
};
```   

---    
## 20 Valid Parentheses   
Problem url:<https://leetcode.com/problems/valid-parentheses/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/valid-parentheses>    
Difficulty:  Easy(126.700000)   

```   
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

```   

```   
class Solution {
public:
    bool isValid(string s) {
        
    }
};
```   

---    
## 21 Merge Two Sorted Lists   
Problem url:<https://leetcode.com/problems/merge-two-sorted-lists/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/merge-two-sorted-lists>    
Difficulty:  Easy(132.700000)   

```   
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    }
};
```   

---    
## 22 Generate Parentheses   
Problem url:<https://leetcode.com/problems/generate-parentheses/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/generate-parentheses>    
Difficulty:  Medium(233.000000)   

```   

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.


For example, given n = 3, a solution set is:


"((()))", "(()())", "(())()", "()(())", "()()()"

```   

```   
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
    }
};
```   

---    
## 23 Merge k Sorted Lists   
Problem url:<https://leetcode.com/problems/merge-k-sorted-lists/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/merge-k-sorted-lists>    
Difficulty:  Hard(321.200000)   

```   

Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
    }
};
```   

---    
## 24 Swap Nodes in Pairs   
Problem url:<https://leetcode.com/problems/swap-nodes-in-pairs/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/swap-nodes-in-pairs>    
Difficulty:  Medium(232.500000)   

```   

Given a linked list, swap every two adjacent nodes and return its head.


For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.


Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
    }
};
```   

---    
## 25 Reverse Nodes in k-Group   
Problem url:<https://leetcode.com/problems/reverse-nodes-in-k-group/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-nodes-in-k-group>    
Difficulty:  Hard(325.400000)   

```   

Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.


If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.
You may not alter the values in the nodes, only nodes itself may be changed.
Only constant memory is allowed.

For example,
Given this linked list: 1->2->3->4->5


For k = 2, you should return: 2->1->4->3->5


For k = 3, you should return: 3->2->1->4->5

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
    }
};
```   

---    
## 26 Remove Duplicates from Sorted Array   
Problem url:<https://leetcode.com/problems/remove-duplicates-from-sorted-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-duplicates-from-sorted-array>    
Difficulty:  Easy(131.100000)   

```   

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.


For example,
Given input array nums = [1,1,2],


Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

```   

```   
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    }
};
```   

---    
## 27 Remove Element   
Problem url:<https://leetcode.com/problems/remove-element/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-element>    
Difficulty:  Easy(131.800000)   

```   
Given an array and a value, remove all instances of that value in place and return the new length.


The order of elements can be changed. It doesn't matter what you leave beyond the new length.

```   

```   
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    }
};
```   

---    
## 28 Implement strStr()   
Problem url:<https://leetcode.com/problems/implement-strstr/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/implement-strstr()>    
Difficulty:  Easy(122.700000)   

```   

Implement strStr().


Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.


Update (2014-11-02):
The signature of the function had been updated to return the index instead of the pointer. If you still see your function signature returns a char * or String, please click the reload button  to reset your code definition.

```   

```   
class Solution {
public:
    int strStr(string haystack, string needle) {
        
    }
};
```   

---    
## 29 Divide Two Integers   
Problem url:<https://leetcode.com/problems/divide-two-integers/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/divide-two-integers>    
Difficulty:  Medium(215.000000)   

```   

Divide two integers without using multiplication, division and mod operator.


If it is overflow, return MAX_INT.

```   

```   
class Solution {
public:
    int divide(int dividend, int divisor) {
        
    }
};
```   

---    
## 30 Substring with Concatenation of All Words   
Problem url:<https://leetcode.com/problems/substring-with-concatenation-of-all-words/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/substring-with-concatenation-of-all-words>    
Difficulty:  Hard(319.700000)   

```   

You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.


For example, given:
s: "barfoothefoobarman"
words: ["foo", "bar"]


You should return the indices: [0,9].
(order does not matter).

```   

```   
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
    }
};
```   

---    
## 31 Next Permutation   
Problem url:<https://leetcode.com/problems/next-permutation/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/next-permutation>    
Difficulty:  Medium(224.900000)   

```   

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.


If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).


The replacement must be in-place, do not allocate extra memory.


Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

```   

```   
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
    }
};
```   

---    
## 32 Longest Valid Parentheses   
Problem url:<https://leetcode.com/problems/longest-valid-parentheses/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-valid-parentheses>    
Difficulty:  Hard(321.200000)   

```   
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.


For "(()", the longest valid parentheses substring is "()", which has length = 2.


Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.

```   

```   
class Solution {
public:
    int longestValidParentheses(string s) {
        
    }
};
```   

---    
## 33 Search in Rotated Sorted Array   
Problem url:<https://leetcode.com/problems/search-in-rotated-sorted-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-in-rotated-sorted-array>    
Difficulty:  Hard(328.800000)   

```   
Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
You are given a target value to search. If found in the array return its index, otherwise return -1.
You may assume no duplicate exists in the array.
```   

```   
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 34 Search for a Range   
Problem url:<https://leetcode.com/problems/search-for-a-range/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-for-a-range>    
Difficulty:  Medium(227.400000)   

```   
Given a sorted array of integers, find the starting and ending position of a given target value.
Your algorithm's runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].

```   

```   
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 35 Search Insert Position   
Problem url:<https://leetcode.com/problems/search-insert-position/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-insert-position>    
Difficulty:  Medium(235.500000)   

```   
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

```   

```   
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 36 Valid Sudoku   
Problem url:<https://leetcode.com/problems/valid-sudoku/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/valid-sudoku>    
Difficulty:  Easy(127.400000)   

```   
Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
The Sudoku board could be partially filled, where empty cells are filled with the character '.'.


A partially filled sudoku which is valid.

Note:
A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.

```   

```   
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
    }
};
```   

---    
## 37 Sudoku Solver   
Problem url:<https://leetcode.com/problems/sudoku-solver/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sudoku-solver>    
Difficulty:  Hard(322.300000)   

```   
Write a program to solve a Sudoku puzzle by filling the empty cells.
Empty cells are indicated by the character '.'.
You may assume that there will be only one unique solution.
```   

```   
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
    }
};
```   

---    
## 38 Count and Say   
Problem url:<https://leetcode.com/problems/count-and-say/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/count-and-say>    
Difficulty:  Easy(125.700000)   

```   
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...


1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.


Given an integer n, generate the nth sequence.


Note: The sequence of integers will be represented as a string.


```   

```   
class Solution {
public:
    string countAndSay(int n) {
        
    }
};
```   

---    
## 39 Combination Sum   
Problem url:<https://leetcode.com/problems/combination-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/combination-sum>    
Difficulty:  Medium(228.200000)   

```   

Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T. 

The same repeated number may be chosen from C unlimited number of times.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The solution set must not contain duplicate combinations.



For example, given candidate set 2,3,6,7 and target 7, 
A solution set is: 
[7] 
[2, 2, 3] 


```   

```   
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    }
};
```   

---    
## 40 Combination Sum II   
Problem url:<https://leetcode.com/problems/combination-sum-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/combination-sum-ii>    
Difficulty:  Medium(225.500000)   

```   

Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The solution set must not contain duplicate combinations.



For example, given candidate set 10,1,2,7,6,1,5 and target 8, 
A solution set is: 
[1, 7] 
[1, 2, 5] 
[2, 6] 
[1, 1, 6] 

```   

```   
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    }
};
```   

---    
## 41 First Missing Positive   
Problem url:<https://leetcode.com/problems/first-missing-positive/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/first-missing-positive>    
Difficulty:  Hard(322.800000)   

```   

Given an unsorted integer array, find the first missing positive integer.


For example,
Given [1,2,0] return 3,
and [3,4,-1,1] return 2.


Your algorithm should run in O(n) time and uses constant space.

```   

```   
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
    }
};
```   

---    
## 42 Trapping Rain Water   
Problem url:<https://leetcode.com/problems/trapping-rain-water/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/trapping-rain-water>    
Difficulty:  Hard(330.300000)   

```   

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining. 


For example, 
Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.



The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped. Thanks Marcos for contributing this image!

Show Tags

Array
Stack
Two Pointers



Show Similar Problems

 (M) Container With Most Water
 (M) Product of Array Except Self



```   

```   
class Solution {
public:
    int trap(vector<int>& height) {
        
    }
};
```   

---    
## 43 Multiply Strings   
Problem url:<https://leetcode.com/problems/multiply-strings/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/multiply-strings>    
Difficulty:  Medium(221.200000)   

```   
Given two numbers represented as strings, return multiplication of the numbers as a string.
Note: The numbers can be arbitrarily large and are non-negative.
```   

```   
class Solution {
public:
    string multiply(string num1, string num2) {
        
    }
};
```   

---    
## 44 Wildcard Matching   
Problem url:<https://leetcode.com/problems/wildcard-matching/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/wildcard-matching>    
Difficulty:  Hard(315.600000)   

```   
Implement wildcard pattern matching with support for '?' and '*'.

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "*") → true
isMatch("aa", "a*") → true
isMatch("ab", "?*") → true
isMatch("aab", "c*a*b") → false

```   

```   
class Solution {
public:
    bool isMatch(string s, string p) {
        
    }
};
```   

---    
## 45 Jump Game II   
Problem url:<https://leetcode.com/problems/jump-game-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/jump-game-ii>    
Difficulty:  Hard(324.200000)   

```   

Given an array of non-negative integers, you are initially positioned at the first index of the array.


Each element in the array represents your maximum jump length at that position. 


Your goal is to reach the last index in the minimum number of jumps.


For example:
Given array A = [2,3,1,1,4]


The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)

```   

```   
class Solution {
public:
    int jump(vector<int>& nums) {
        
    }
};
```   

---    
## 46 Permutations   
Problem url:<https://leetcode.com/problems/permutations/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/permutations>    
Difficulty:  Medium(232.200000)   

```   

Given a collection of numbers, return all possible permutations.


For example,
[1,2,3] have the following permutations:
[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].

```   

```   
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
    }
};
```   

---    
## 47 Permutations II   
Problem url:<https://leetcode.com/problems/permutations-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/permutations-ii>    
Difficulty:  Medium(225.900000)   

```   

Given a collection of numbers that might contain duplicates, return all possible unique permutations.


For example,
[1,1,2] have the following unique permutations:
[1,1,2], [1,2,1], and [2,1,1].

```   

```   
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
    }
};
```   

---    
## 48 Rotate Image   
Problem url:<https://leetcode.com/problems/rotate-image/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/rotate-image>    
Difficulty:  Medium(232.300000)   

```   
You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
Follow up:
Could you do this in-place?
```   

```   
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
    }
};
```   

---    
## 49 Group Anagrams   
Problem url:<https://leetcode.com/problems/anagrams/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/group-anagrams>    
Difficulty:  Medium(224.500000)   

```   
Given an array of strings, group anagrams together.

For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
Return:

[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

For the return value, each inner list's elements must follow the lexicographic order.
All inputs will be in lower-case.


Update (2015-08-09):
The signature of the function had been updated to return list<list<string>> instead of list<string>, as suggested here. If you still see your function signature return a list<string>, please click the reload button  to reset your code definition.


Show Tags

Hash Table
String



Show Similar Problems

 (E) Valid Anagram
 (E) Group Shifted Strings



```   

```   
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    }
};
```   

---    
## 50 Pow(x, n)   
Problem url:<https://leetcode.com/problems/powx-n/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/pow(x,-n)>    
Difficulty:  Medium(226.800000)   

```   
Implement pow(x, n).

```   

```   
class Solution {
public:
    double myPow(double x, int n) {
        
    }
};
```   

---    
## 51 N-Queens   
Problem url:<https://leetcode.com/problems/n-queens/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/n-queens>    
Difficulty:  Hard(326.400000)   

```   
The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle.
Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively.
For example,
There exist two distinct solutions to the 4-queens puzzle:

[
 [".Q..",  // Solution 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // Solution 2
  "Q...",
  "...Q",
  ".Q.."]
]

```   

```   
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
    }
};
```   

---    
## 52 N-Queens II   
Problem url:<https://leetcode.com/problems/n-queens-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/n-queens-ii>    
Difficulty:  Hard(336.400000)   

```   
Follow up for N-Queens problem.
Now, instead outputting board configurations, return the total number of distinct solutions.

```   

```   
class Solution {
public:
    int totalNQueens(int n) {
        
    }
};
```   

---    
## 53 Maximum Subarray   
Problem url:<https://leetcode.com/problems/maximum-subarray/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximum-subarray>    
Difficulty:  Medium(234.700000)   

```   

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.


For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
the contiguous subarray [4,−1,2,1] has the largest sum = 6.

click to show more practice.
More practice:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

```   

```   
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    }
};
```   

---    
## 54 Spiral Matrix   
Problem url:<https://leetcode.com/problems/spiral-matrix/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/spiral-matrix>    
Difficulty:  Medium(220.800000)   

```   
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.


For example,
Given the following matrix:


[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]


You should return [1,2,3,6,9,8,7,4,5].

```   

```   
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    }
};
```   

---    
## 55 Jump Game   
Problem url:<https://leetcode.com/problems/jump-game/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/jump-game>    
Difficulty:  Medium(227.000000)   

```   

Given an array of non-negative integers, you are initially positioned at the first index of the array.


Each element in the array represents your maximum jump length at that position. 


Determine if you are able to reach the last index.


For example:
A = [2,3,1,1,4], return true.


A = [3,2,1,0,4], return false.

```   

```   
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
    }
};
```   

---    
## 56 Merge Intervals   
Problem url:<https://leetcode.com/problems/merge-intervals/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/merge-intervals>    
Difficulty:  Hard(322.800000)   

```   
Given a collection of intervals, merge all overlapping intervals.

For example,
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18].

```   

```   
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        
    }
};
```   

---    
## 57 Insert Interval   
Problem url:<https://leetcode.com/problems/insert-interval/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/insert-interval>    
Difficulty:  Hard(321.800000)   

```   
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.

Example 1:
Given intervals [1,3],[6,9], insert and merge [2,5] in as [1,5],[6,9].


Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] in as [1,2],[3,10],[12,16].


This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

```   

```   
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        
    }
};
```   

---    
## 58 Length of Last Word   
Problem url:<https://leetcode.com/problems/length-of-last-word/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/length-of-last-word>    
Difficulty:  Easy(127.400000)   

```   
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.

```   

```   
class Solution {
public:
    int lengthOfLastWord(string s) {
        
    }
};
```   

---    
## 59 Spiral Matrix II   
Problem url:<https://leetcode.com/problems/spiral-matrix-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/spiral-matrix-ii>    
Difficulty:  Medium(232.200000)   

```   
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

For example,
Given n = 3,

You should return the following matrix:

[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]

```   

```   
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
    }
};
```   

---    
## 60 Permutation Sequence   
Problem url:<https://leetcode.com/problems/permutation-sequence/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/permutation-sequence>    
Difficulty:  Medium(223.000000)   

```   
The set [1,2,3,…,n] contains a total of n! unique permutations.
By listing and labeling all of the permutations in order,
We get the following sequence (ie, for n = 3):

"123"
"132"
"213"
"231"
"312"
"321"


Given n and k, return the kth permutation sequence.
Note: Given n will be between 1 and 9 inclusive.
```   

```   
class Solution {
public:
    string getPermutation(int n, int k) {
        
    }
};
```   

---    
## 61 Rotate List   
Problem url:<https://leetcode.com/problems/rotate-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/rotate-list>    
Difficulty:  Medium(221.700000)   

```   
Given a list, rotate the list to the right by k places, where k is non-negative.
For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
    }
};
```   

---    
## 62 Unique Paths   
Problem url:<https://leetcode.com/problems/unique-paths/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/unique-paths>    
Difficulty:  Medium(233.300000)   

```   
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?


Above is a 3 x 7 grid. How many possible unique paths are there?

Note: m and n will be at most 100.

Show Tags

Array
Dynamic Programming



Show Similar Problems

 (M) Unique Paths II
 (M) Minimum Path Sum
 (H) Dungeon Game



```   

```   
class Solution {
public:
    int uniquePaths(int m, int n) {
        
    }
};
```   

---    
## 63 Unique Paths II   
Problem url:<https://leetcode.com/problems/unique-paths-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/unique-paths-ii>    
Difficulty:  Medium(228.000000)   

```   
Follow up for "Unique Paths":
Now consider if some obstacles are added to the grids. How many unique paths would there be?
An obstacle and empty space is marked as 1 and 0 respectively in the grid.
For example,
There is one obstacle in the middle of a 3x3 grid as illustrated below.

[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]

The total number of unique paths is 2.
Note: m and n will be at most 100.

Show Tags

Array
Dynamic Programming



Show Similar Problems

 (M) Unique Paths



```   

```   
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
    }
};
```   

---    
## 64 Minimum Path Sum   
Problem url:<https://leetcode.com/problems/minimum-path-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/minimum-path-sum>    
Difficulty:  Medium(232.500000)   

```   
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.
Note: You can only move either down or right at any point in time.
```   

```   
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
    }
};
```   

---    
## 65 Valid Number   
Problem url:<https://leetcode.com/problems/valid-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/valid-number>    
Difficulty:  Hard(311.500000)   

```   
Validate if a given string is numeric.

Some examples:
"0" => true
"   0.1  " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.


Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button  to reset your code definition.

```   

```   
class Solution {
public:
    bool isNumber(string s) {
        
    }
};
```   

---    
## 66 Plus One   
Problem url:<https://leetcode.com/problems/plus-one/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/plus-one>    
Difficulty:  Easy(130.400000)   

```   
Given a non-negative number represented as an array of digits, plus one to the number.
The digits are stored such that the most significant digit is at the head of the list.
```   

```   
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
    }
};
```   

---    
## 67 Add Binary   
Problem url:<https://leetcode.com/problems/add-binary/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/add-binary>    
Difficulty:  Easy(124.700000)   

```   

Given two binary strings, return their sum (also a binary string).


For example,
a = "11"
b = "1"
Return "100".

```   

```   
class Solution {
public:
    string addBinary(string a, string b) {
        
    }
};
```   

---    
## 68 Text Justification   
Problem url:<https://leetcode.com/problems/text-justification/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/text-justification>    
Difficulty:  Hard(314.800000)   

```   

Given an array of words and a length L, format the text such that each line has exactly L characters and is fully (left and right) justified.


You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly L characters.


Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line do not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.


For the last line of text, it should be left justified and no extra space is inserted between words.


For example,
words: ["This", "is", "an", "example", "of", "text", "justification."]
L: 16.


Return the formatted lines as:

[
   "This    is    an",
   "example  of text",
   "justification.  "
]



Note: Each word is guaranteed not to exceed L in length.

click to show corner cases.
Corner Cases:


A line other than the last line might contain only one word. What should you do in this case?
In this case, that line should be left-justified.


```   

```   
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
    }
};
```   

---    
## 69 Sqrt(x)   
Problem url:<https://leetcode.com/problems/sqrtx/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sqrt(x)>    
Difficulty:  Medium(223.400000)   

```   
Implement int sqrt(int x).
Compute and return the square root of x.
```   

```   
class Solution {
public:
    int mySqrt(int x) {
        
    }
};
```   

---    
## 70 Climbing Stairs   
Problem url:<https://leetcode.com/problems/climbing-stairs/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/climbing-stairs>    
Difficulty:  Easy(134.600000)   

```   
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

```   

```   
class Solution {
public:
    int climbStairs(int n) {
        
    }
};
```   

---    
## 71 Simplify Path   
Problem url:<https://leetcode.com/problems/simplify-path/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/simplify-path>    
Difficulty:  Medium(220.200000)   

```   
Given an absolute path for a file (Unix-style), simplify it.
For example,
path = "/home/", => "/home"
path = "/a/./b/../../c/", => "/c"

click to show corner cases.
Corner Cases:


Did you consider the case where path = "/../"?
In this case, you should return "/".
Another corner case is the path might contain multiple slashes '/' together, such as "/home//foo/".
In this case, you should ignore redundant slashes and return "/home/foo".


```   

```   
class Solution {
public:
    string simplifyPath(string path) {
        
    }
};
```   

---    
## 72 Edit Distance   
Problem url:<https://leetcode.com/problems/edit-distance/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/edit-distance>    
Difficulty:  Hard(326.600000)   

```   

Given two words word1 and word2, find the minimum number of steps required to convert word1 to word2. (each operation is counted as 1 step.)


You have the following 3 operations permitted on a word:


a) Insert a character
b) Delete a character
c) Replace a character

```   

```   
class Solution {
public:
    int minDistance(string word1, string word2) {
        
    }
};
```   

---    
## 73 Set Matrix Zeroes   
Problem url:<https://leetcode.com/problems/set-matrix-zeroes/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/set-matrix-zeroes>    
Difficulty:  Medium(231.700000)   

```   

Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.

click to show follow up.
Follow up:

Did you use extra space?
A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?


```   

```   
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    }
};
```   

---    
## 74 Search a 2D Matrix   
Problem url:<https://leetcode.com/problems/search-a-2d-matrix/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-a-2d-matrix>    
Difficulty:  Medium(231.900000)   

```   
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:


Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.



For example,

Consider the following matrix:


[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]

Given target = 3, return true.
```   

```   
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};
```   

---    
## 75 Sort Colors   
Problem url:<https://leetcode.com/problems/sort-colors/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sort-colors>    
Difficulty:  Medium(232.700000)   

```   

Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.


Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.


Note:
You are not suppose to use the library's sort function for this problem.

click to show follow up.

Follow up:
A rather straight forward solution is a two-pass algorithm using counting sort.
First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
Could you come up with an one-pass algorithm using only constant space?


```   

```   
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
    }
};
```   

---    
## 76 Minimum Window Substring   
Problem url:<https://leetcode.com/problems/minimum-window-substring/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/minimum-window-substring>    
Difficulty:  Hard(319.100000)   

```   

Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).


For example,
S = "ADOBECODEBANC"
T = "ABC"


Minimum window is "BANC".


Note:
If there is no such window in S that covers all characters in T, return the empty string "".


If there are multiple such windows, you are guaranteed that there will always be only one unique minimum window in S.

```   

```   
class Solution {
public:
    string minWindow(string s, string t) {
        
    }
};
```   

---    
## 77 Combinations   
Problem url:<https://leetcode.com/problems/combinations/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/combinations>    
Difficulty:  Medium(231.300000)   

```   

Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.


For example,
If n = 4 and k = 2, a solution is:


[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]

```   

```   
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
    }
};
```   

---    
## 78 Subsets   
Problem url:<https://leetcode.com/problems/subsets/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/subsets>    
Difficulty:  Medium(228.400000)   

```   

Given a set of distinct integers, nums, return all possible subsets.

Note:

Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.



For example,
If nums = [1,2,3], a solution is:


[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

```   

```   
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    }
};
```   

---    
## 79 Word Search   
Problem url:<https://leetcode.com/problems/word-search/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-search>    
Difficulty:  Medium(220.800000)   

```   

Given a 2D board and a word, find if the word exists in the grid.


The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.


For example,
Given board = 

[
  ["ABCE"],
  ["SFCS"],
  ["ADEE"]
]

word = "ABCCED", -> returns true,
word = "SEE", -> returns true,
word = "ABCB", -> returns false.

```   

```   
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
    }
};
```   

---    
## 80 Remove Duplicates from Sorted Array II   
Problem url:<https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-duplicates-from-sorted-array-ii>    
Difficulty:  Medium(230.600000)   

```   

Follow up for "Remove Duplicates":
What if duplicates are allowed at most twice?

For example,
Given sorted array nums = [1,1,1,2,2,3],


Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.

```   

```   
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    }
};
```   

---    
## 81 Search in Rotated Sorted Array II   
Problem url:<https://leetcode.com/problems/search-in-rotated-sorted-array-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-in-rotated-sorted-array-ii>    
Difficulty:  Medium(231.200000)   

```   
Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?
Would this affect the run-time complexity? How and why?
Write a function to determine if a given target is in the array.
```   

```   
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
    }
};
```   

---    
## 82 Remove Duplicates from Sorted List II   
Problem url:<https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-duplicates-from-sorted-list-ii>    
Difficulty:  Medium(225.100000)   

```   

Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.


For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};
```   

---    
## 83 Remove Duplicates from Sorted List   
Problem url:<https://leetcode.com/problems/remove-duplicates-from-sorted-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-duplicates-from-sorted-list>    
Difficulty:  Easy(134.700000)   

```   

Given a sorted linked list, delete all duplicates such that each element appear only once.


For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};
```   

---    
## 84 Largest Rectangle in Histogram   
Problem url:<https://leetcode.com/problems/largest-rectangle-in-histogram/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/largest-rectangle-in-histogram>    
Difficulty:  Hard(322.800000)   

```   

Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.



Above is a histogram where width of each bar is 1, given height = [2,1,5,6,2,3].



The largest rectangle is shown in the shaded area, which has area = 10 unit.


For example,
Given height = [2,1,5,6,2,3],
return 10.

```   

```   
class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        
    }
};
```   

---    
## 85 Maximal Rectangle   
Problem url:<https://leetcode.com/problems/maximal-rectangle/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximal-rectangle>    
Difficulty:  Hard(322.200000)   

```   

Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing all ones and return its area.

```   

```   
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
    }
};
```   

---    
## 86 Partition List   
Problem url:<https://leetcode.com/problems/partition-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/partition-list>    
Difficulty:  Medium(227.600000)   

```   
Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.


You should preserve the original relative order of the nodes in each of the two partitions.


For example,
Given 1->4->3->2->5->2 and x = 3,
return 1->2->2->4->3->5.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
    }
};
```   

---    
## 87 Scramble String   
Problem url:<https://leetcode.com/problems/scramble-string/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/scramble-string>    
Difficulty:  Hard(324.800000)   

```   

Given a string s1, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively.


Below is one possible representation of s1 = "great":


    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t


To scramble the string, we may choose any non-leaf node and swap its two children.


For example, if we choose the node "gr" and swap its two children, it produces a scrambled string "rgeat".


    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t


We say that "rgeat" is a scrambled string of "great".


Similarly, if we continue to swap the children of nodes "eat" and "at", it produces a scrambled string "rgtae".


    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a


We say that "rgtae" is a scrambled string of "great".


Given two strings s1 and s2 of the same length, determine if s2 is a scrambled string of s1.

```   

```   
class Solution {
public:
    bool isScramble(string s1, string s2) {
        
    }
};
```   

---    
## 88 Merge Sorted Array   
Problem url:<https://leetcode.com/problems/merge-sorted-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/merge-sorted-array>    
Difficulty:  Easy(129.000000)   

```   
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
```   

```   
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    }
};
```   

---    
## 89 Gray Code   
Problem url:<https://leetcode.com/problems/gray-code/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/gray-code>    
Difficulty:  Medium(233.300000)   

```   
The gray code is a binary numeral system where two successive values differ in only one bit.
Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:

00 - 0
01 - 1
11 - 3
10 - 2

Note:
For a given n, a gray code sequence is not uniquely defined.

For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.
For now, the judge is able to judge based on one instance of gray code sequence. Sorry about that.
```   

```   
class Solution {
public:
    vector<int> grayCode(int n) {
        
    }
};
```   

---    
## 90 Subsets II   
Problem url:<https://leetcode.com/problems/subsets-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/subsets-ii>    
Difficulty:  Medium(228.000000)   

```   

Given a collection of integers that might contain duplicates, nums, return all possible subsets.

Note:

Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.



For example,
If nums = [1,2,2], a solution is:


[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]

```   

```   
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
    }
};
```   

---    
## 91 Decode Ways   
Problem url:<https://leetcode.com/problems/decode-ways/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/decode-ways>    
Difficulty:  Medium(216.400000)   

```   

A message containing letters from A-Z is being encoded to numbers using the following mapping:


'A' -> 1
'B' -> 2
...
'Z' -> 26


Given an encoded message containing digits, determine the total number of ways to decode it.


For example,
Given encoded message "12",
it could be decoded as "AB" (1 2) or "L" (12).


The number of ways decoding "12" is 2.

```   

```   
class Solution {
public:
    int numDecodings(string s) {
        
    }
};
```   

---    
## 92 Reverse Linked List II   
Problem url:<https://leetcode.com/problems/reverse-linked-list-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-linked-list-ii>    
Difficulty:  Medium(226.000000)   

```   

Reverse a linked list from position m to n. Do it in-place and in one-pass.


For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,


return 1->4->3->2->5->NULL.


Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
    }
};
```   

---    
## 93 Restore IP Addresses   
Problem url:<https://leetcode.com/problems/restore-ip-addresses/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/restore-ip-addresses>    
Difficulty:  Medium(221.400000)   

```   
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

For example:
Given "25525511135",


return ["255.255.11.135", "255.255.111.35"]. (Order does not matter)

```   

```   
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        
    }
};
```   

---    
## 94 Binary Tree Inorder Traversal   
Problem url:<https://leetcode.com/problems/binary-tree-inorder-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-inorder-traversal>    
Difficulty:  Medium(236.600000)   

```   
Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3



return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?
confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
    }
};
```   

---    
## 95 Unique Binary Search Trees II   
Problem url:<https://leetcode.com/problems/unique-binary-search-trees-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/unique-binary-search-trees-ii>    
Difficulty:  Medium(228.300000)   

```   
Given n, generate all structurally unique BST's (binary search trees) that store values 1...n.

For example,
Given n = 3, your program should return all 5 unique BST's shown below.


   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3


confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        
    }
};
```   

---    
## 96 Unique Binary Search Trees   
Problem url:<https://leetcode.com/problems/unique-binary-search-trees/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/unique-binary-search-trees>    
Difficulty:  Medium(235.600000)   

```   
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?

For example,
Given n = 3, there are a total of 5 unique BST's.


   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3


```   

```   
class Solution {
public:
    int numTrees(int n) {
        
    }
};
```   

---    
## 97 Interleaving String   
Problem url:<https://leetcode.com/problems/interleaving-string/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/interleaving-string>    
Difficulty:  Hard(321.000000)   

```   

Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.


For example,
Given:
s1 = "aabcc",
s2 = "dbbca",


When s3 = "aadbbcbcac", return true.
When s3 = "aadbbbaccc", return false.

```   

```   
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        
    }
};
```   

---    
## 98 Validate Binary Search Tree   
Problem url:<https://leetcode.com/problems/validate-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/validate-binary-search-tree>    
Difficulty:  Medium(220.100000)   

```   

Given a binary tree, determine if it is a valid binary search tree (BST).


Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.


confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        
    }
};
```   

---    
## 99 Recover Binary Search Tree   
Problem url:<https://leetcode.com/problems/recover-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/recover-binary-search-tree>    
Difficulty:  Hard(324.500000)   

```   

Two elements of a binary search tree (BST) are swapped by mistake.
Recover the tree without changing its structure.

Note:
A solution using O(n) space is pretty straight forward. Could you devise a constant space solution?

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void recoverTree(TreeNode* root) {
        
    }
};
```   

---    
## 100 Same Tree   
Problem url:<https://leetcode.com/problems/same-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/same-tree>    
Difficulty:  Easy(141.600000)   

```   

Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
    }
};
```   

---    
## 101 Symmetric Tree   
Problem url:<https://leetcode.com/problems/symmetric-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/symmetric-tree>    
Difficulty:  Easy(131.800000)   

```   
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3



But the following is not:

    1
   / \
  2   2
   \   \
   3    3



Note:
Bonus points if you could solve it both recursively and iteratively.

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
    }
};
```   

---    
## 102 Binary Tree Level Order Traversal   
Problem url:<https://leetcode.com/problems/binary-tree-level-order-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-level-order-traversal>    
Difficulty:  Easy(129.400000)   

```   
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7



return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]


confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
    }
};
```   

---    
## 103 Binary Tree Zigzag Level Order Traversal   
Problem url:<https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-zigzag-level-order-traversal>    
Difficulty:  Medium(226.500000)   

```   
Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7



return its zigzag level order traversal as:

[
  [3],
  [20,9],
  [15,7]
]


confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    }
};
```   

---    
## 104 Maximum Depth of Binary Tree   
Problem url:<https://leetcode.com/problems/maximum-depth-of-binary-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximum-depth-of-binary-tree>    
Difficulty:  Easy(145.400000)   

```   
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
    }
};
```   

---    
## 105 Construct Binary Tree from Preorder and Inorder Traversal   
Problem url:<https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/construct-binary-tree-from-preorder-and-inorder-traversal>    
Difficulty:  Medium(226.600000)   

```   
Given preorder and inorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    }
};
```   

---    
## 106 Construct Binary Tree from Inorder and Postorder Traversal   
Problem url:<https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/construct-binary-tree-from-inorder-and-postorder-traversal>    
Difficulty:  Medium(227.100000)   

```   
Given inorder and postorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
    }
};
```   

---    
## 107 Binary Tree Level Order Traversal II   
Problem url:<https://leetcode.com/problems/binary-tree-level-order-traversal-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-level-order-traversal-ii>    
Difficulty:  Easy(131.300000)   

```   
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree {3,9,20,#,#,15,7},

    3
   / \
  9  20
    /  \
   15   7



return its bottom-up level order traversal as:

[
  [15,7],
  [9,20],
  [3]
]


confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
OJ's Binary Tree Serialization:

The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below.


Here's an example:

   1
  / \
 2   3
    /
   4
    \
     5

The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". 


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    }
};
```   

---    
## 108 Convert Sorted Array to Binary Search Tree   
Problem url:<https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/convert-sorted-array-to-binary-search-tree>    
Difficulty:  Medium(234.300000)   

```   
Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
    }
};
```   

---    
## 109 Convert Sorted List to Binary Search Tree   
Problem url:<https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/convert-sorted-list-to-binary-search-tree>    
Difficulty:  Medium(228.200000)   

```   
Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
    }
};
```   

---    
## 110 Balanced Binary Tree   
Problem url:<https://leetcode.com/problems/balanced-binary-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/balanced-binary-tree>    
Difficulty:  Easy(132.100000)   

```   
Given a binary tree, determine if it is height-balanced.


For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
    }
};
```   

---    
## 111 Minimum Depth of Binary Tree   
Problem url:<https://leetcode.com/problems/minimum-depth-of-binary-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/minimum-depth-of-binary-tree>    
Difficulty:  Easy(129.100000)   

```   
Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        
    }
};
```   

---    
## 112 Path Sum   
Problem url:<https://leetcode.com/problems/path-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/path-sum>    
Difficulty:  Easy(129.800000)   

```   

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.


For example:
Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1


return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
    }
};
```   

---    
## 113 Path Sum II   
Problem url:<https://leetcode.com/problems/path-sum-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/path-sum-ii>    
Difficulty:  Medium(226.600000)   

```   

Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.


For example:
Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1


return

[
   [5,4,11,2],
   [5,8,4,5]
]


```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
    }
};
```   

---    
## 114 Flatten Binary Tree to Linked List   
Problem url:<https://leetcode.com/problems/flatten-binary-tree-to-linked-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/flatten-binary-tree-to-linked-list>    
Difficulty:  Medium(229.000000)   

```   

Given a binary tree, flatten it to a linked list in-place.


For example,
Given

         1
        / \
       2   5
      / \   \
     3   4   6



The flattened tree should look like:

   1
    \
     2
      \
       3
        \
         4
          \
           5
            \
             6

click to show hints.
Hints:
If you notice carefully in the flattened tree, each node's right child points to the next node of a pre-order traversal.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        
    }
};
```   

---    
## 115 Distinct Subsequences   
Problem url:<https://leetcode.com/problems/distinct-subsequences/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/distinct-subsequences>    
Difficulty:  Hard(326.900000)   

```   

Given a string S and a string T, count the number of distinct subsequences of T in S.


A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ACE" is a subsequence of "ABCDE" while "AEC" is not).


Here is an example:
S = "rabbbit", T = "rabbit"


Return 3.

```   

```   
class Solution {
public:
    int numDistinct(string s, string t) {
        
    }
};
```   

---    
## 116 Populating Next Right Pointers in Each Node   
Problem url:<https://leetcode.com/problems/populating-next-right-pointers-in-each-node/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/populating-next-right-pointers-in-each-node>    
Difficulty:  Medium(236.400000)   

```   

Given a binary tree

    struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
    }


Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
Initially, all next pointers are set to NULL.

Note:

You may only use constant extra space.
You may assume that it is a perfect binary tree (ie, all leaves are at the same level, and every parent has two children).



For example,
Given the following perfect binary tree,

         1
       /  \
      2    3
     / \  / \
    4  5  6  7



After calling your function, the tree should look like:

         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \  / \
    4->5->6->7 -> NULL


```   

```   
/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        
    }
};
```   

---    
## 117 Populating Next Right Pointers in Each Node II   
Problem url:<https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/populating-next-right-pointers-in-each-node-ii>    
Difficulty:  Hard(332.200000)   

```   
Follow up for problem "Populating Next Right Pointers in Each Node".
What if the given tree could be any binary tree? Would your previous solution still work?

Note:
You may only use constant extra space.


For example,
Given the following binary tree,

         1
       /  \
      2    3
     / \    \
    4   5    7



After calling your function, the tree should look like:

         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \    \
    4-> 5 -> 7 -> NULL


```   

```   
/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        
    }
};
```   

---    
## 118 Pascal's Triangle   
Problem url:<https://leetcode.com/problems/pascals-triangle/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/pascal's-triangle>    
Difficulty:  Easy(130.400000)   

```   
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]


```   

```   
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    }
};
```   

---    
## 119 Pascal's Triangle II   
Problem url:<https://leetcode.com/problems/pascals-triangle-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/pascal's-triangle-ii>    
Difficulty:  Easy(129.600000)   

```   
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].


Note:
Could you optimize your algorithm to use only O(k) extra space?

```   

```   
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
    }
};
```   

---    
## 120 Triangle   
Problem url:<https://leetcode.com/problems/triangle/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/triangle>    
Difficulty:  Medium(227.700000)   

```   
Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]



The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).


Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.

```   

```   
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
    }
};
```   

---    
## 121 Best Time to Buy and Sell Stock   
Problem url:<https://leetcode.com/problems/best-time-to-buy-and-sell-stock/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/best-time-to-buy-and-sell-stock>    
Difficulty:  Medium(233.300000)   

```   
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
```   

```   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```   

---    
## 122 Best Time to Buy and Sell Stock II   
Problem url:<https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/best-time-to-buy-and-sell-stock-ii>    
Difficulty:  Medium(239.000000)   

```   
Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
```   

```   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```   

---    
## 123 Best Time to Buy and Sell Stock III   
Problem url:<https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/best-time-to-buy-and-sell-stock-iii>    
Difficulty:  Hard(324.300000)   

```   
Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete at most two transactions.
Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
```   

```   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```   

---    
## 124 Binary Tree Maximum Path Sum   
Problem url:<https://leetcode.com/problems/binary-tree-maximum-path-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-maximum-path-sum>    
Difficulty:  Hard(321.700000)   

```   

Given a binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path does not need to go through the root.

For example:
Given the below binary tree,

       1
      / \
     2   3



Return 6.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
    }
};
```   

---    
## 125 Valid Palindrome   
Problem url:<https://leetcode.com/problems/valid-palindrome/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/valid-palindrome>    
Difficulty:  Easy(122.100000)   

```   

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.


For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.


Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

```   

```   
class Solution {
public:
    bool isPalindrome(string s) {
        
    }
};
```   

---    
## 126 Word Ladder II   
Problem url:<https://leetcode.com/problems/word-ladder-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-ladder-ii>    
Difficulty:  Hard(313.200000)   

```   

Given two words (beginWord and endWord), and a dictionary's word list, find all shortest transformation sequence(s) from beginWord to endWord, such that:


Only one letter can be changed at a time
Each intermediate word must exist in the word list


For example,


Given:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]


Return

  [
    ["hit","hot","dot","dog","cog"],
    ["hit","hot","lot","log","cog"]
  ]



Note:

All words have the same length.
All words contain only lowercase alphabetic characters.


```   

```   
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
        
    }
};
```   

---    
## 127 Word Ladder   
Problem url:<https://leetcode.com/problems/word-ladder/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-ladder>    
Difficulty:  Medium(219.500000)   

```   

Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:


Only one letter can be changed at a time
Each intermediate word must exist in the word list


For example,


Given:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]


As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.


Note:

Return 0 if there is no such transformation sequence.
All words have the same length.
All words contain only lowercase alphabetic characters.


```   

```   
class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        
    }
};
```   

---    
## 128 Longest Consecutive Sequence   
Problem url:<https://leetcode.com/problems/longest-consecutive-sequence/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-consecutive-sequence>    
Difficulty:  Hard(329.900000)   

```   

Given an unsorted array of integers, find the length of the longest consecutive elements sequence.


For example,
Given [100, 4, 200, 1, 3, 2],
The longest consecutive elements sequence is [1, 2, 3, 4]. Return its length: 4.


Your algorithm should run in O(n) complexity.

```   

```   
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
    }
};
```   

---    
## 129 Sum Root to Leaf Numbers   
Problem url:<https://leetcode.com/problems/sum-root-to-leaf-numbers/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sum-root-to-leaf-numbers>    
Difficulty:  Medium(230.500000)   

```   
Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
An example is the root-to-leaf path 1->2->3 which represents the number 123.
Find the total sum of all root-to-leaf numbers.
For example,

    1
   / \
  2   3



The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.


Return the sum = 12 + 13 = 25.

```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        
    }
};
```   

---    
## 130 Surrounded Regions   
Problem url:<https://leetcode.com/problems/surrounded-regions/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/surrounded-regions>    
Difficulty:  Medium(214.900000)   

```   

Given a 2D board containing 'X' and 'O', capture all regions surrounded by 'X'.
A region is captured by flipping all 'O's into 'X's in that surrounded region.


For example,

X X X X
X O O X
X X O X
X O X X



After running your function, the board should be:

X X X X
X X X X
X X X X
X O X X


```   

```   
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
    }
};
```   

---    
## 131 Palindrome Partitioning   
Problem url:<https://leetcode.com/problems/palindrome-partitioning/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-partitioning>    
Difficulty:  Medium(227.200000)   

```   

Given a string s, partition s such that every substring of the partition is a palindrome.


Return all possible palindrome partitioning of s.


For example, given s = "aab",

Return

  [
    ["aa","b"],
    ["a","a","b"]
  ]


```   

```   
class Solution {
public:
    vector<vector<string>> partition(string s) {
        
    }
};
```   

---    
## 132 Palindrome Partitioning II   
Problem url:<https://leetcode.com/problems/palindrome-partitioning-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-partitioning-ii>    
Difficulty:  Hard(320.200000)   

```   

Given a string s, partition s such that every substring of the partition is a palindrome.


Return the minimum cuts needed for a palindrome partitioning of s.


For example, given s = "aab",
Return 1 since the palindrome partitioning ["aa","b"] could be produced using 1 cut.

```   

```   
class Solution {
public:
    int minCut(string s) {
        
    }
};
```   

---    
## 133 Clone Graph   
Problem url:<https://leetcode.com/problems/clone-graph/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/clone-graph>    
Difficulty:  Medium(224.400000)   

```   

Clone an undirected graph. Each node in the graph contains a label and a list of its neighbors.



OJ's undirected graph serialization:

Nodes are labeled uniquely.


We use # as a separator for each node, and , as a separator for node label and each neighbor of the node.

```   

```   
/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        
    }
};
```   

---    
## 134 Gas Station   
Problem url:<https://leetcode.com/problems/gas-station/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/gas-station>    
Difficulty:  Medium(225.900000)   

```   

There are N gas stations along a circular route, where the amount of gas at station i is gas[i].


You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.


Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.


Note:
The solution is guaranteed to be unique.

```   

```   
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
    }
};
```   

---    
## 135 Candy   
Problem url:<https://leetcode.com/problems/candy/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/candy>    
Difficulty:  Hard(320.900000)   

```   

There are N children standing in a line. Each child is assigned a rating value. 


You are giving candies to these children subjected to the following requirements:


Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.


What is the minimum candies you must give?

```   

```   
class Solution {
public:
    int candy(vector<int>& ratings) {
        
    }
};
```   

---    
## 136 Single Number   
Problem url:<https://leetcode.com/problems/single-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/single-number>    
Difficulty:  Medium(245.700000)   

```   
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

```   

```   
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    }
};
```   

---    
## 137 Single Number II   
Problem url:<https://leetcode.com/problems/single-number-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/single-number-ii>    
Difficulty:  Medium(235.300000)   

```   

Given an array of integers, every element appears three times except for one. Find that single one.


Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

```   

```   
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    }
};
```   

---    
## 138 Copy List with Random Pointer   
Problem url:<https://leetcode.com/problems/copy-list-with-random-pointer/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/copy-list-with-random-pointer>    
Difficulty:  Hard(325.500000)   

```   

A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.


Return a deep copy of the list.

```   

```   
/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        
    }
};
```   

---    
## 139 Word Break   
Problem url:<https://leetcode.com/problems/word-break/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-break>    
Difficulty:  Medium(223.400000)   

```   

Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

For example, given
s = "leetcode",
dict = ["leet", "code"].


Return true because "leetcode" can be segmented as "leet code".

```   

```   
class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        
    }
};
```   

---    
## 140 Word Break II   
Problem url:<https://leetcode.com/problems/word-break-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-break-ii>    
Difficulty:  Hard(318.000000)   

```   

Given a string s and a dictionary of words dict, add spaces in s to construct a sentence where each word is a valid dictionary word.


Return all such possible sentences.


For example, given
s = "catsanddog",
dict = ["cat", "cats", "and", "sand", "dog"].


A solution is ["cats and dog", "cat sand dog"].


```   

```   
class Solution {
public:
    vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
        
    }
};
```   

---    
## 141 Linked List Cycle   
Problem url:<https://leetcode.com/problems/linked-list-cycle/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/linked-list-cycle>    
Difficulty:  Medium(236.500000)   

```   

Given a linked list, determine if it has a cycle in it.


Follow up:
Can you solve it without using extra space?

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
    }
};
```   

---    
## 142 Linked List Cycle II   
Problem url:<https://leetcode.com/problems/linked-list-cycle-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/linked-list-cycle-ii>    
Difficulty:  Medium(231.500000)   

```   

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.


Note: Do not modify the linked list.

Follow up:
Can you solve it without using extra space?

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
    }
};
```   

---    
## 143 Reorder List   
Problem url:<https://leetcode.com/problems/reorder-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reorder-list>    
Difficulty:  Medium(221.200000)   

```   

Given a singly linked list L: L0→L1→…→Ln-1→Ln,
reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…

You must do this in-place without altering the nodes' values.

For example,
Given {1,2,3,4}, reorder it to {1,4,2,3}.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        
    }
};
```   

---    
## 144 Binary Tree Preorder Traversal   
Problem url:<https://leetcode.com/problems/binary-tree-preorder-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-preorder-traversal>    
Difficulty:  Medium(236.700000)   

```   
Given a binary tree, return the preorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3



return [1,2,3].

Note: Recursive solution is trivial, could you do it iteratively?
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
    }
};
```   

---    
## 145 Binary Tree Postorder Traversal   
Problem url:<https://leetcode.com/problems/binary-tree-postorder-traversal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-postorder-traversal>    
Difficulty:  Hard(332.900000)   

```   
Given a binary tree, return the postorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},

   1
    \
     2
    /
   3



return [3,2,1].

Note: Recursive solution is trivial, could you do it iteratively?
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
    }
};
```   

---    
## 146 LRU Cache   
Problem url:<https://leetcode.com/problems/lru-cache/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/lru-cache>    
Difficulty:  Hard(315.300000)   

```   

Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and set.


get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
set(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

```   

```   
class LRUCache{
public:
    LRUCache(int capacity) {
        
    }
    
    int get(int key) {
        
    }
    
    void set(int key, int value) {
        
    }
};
```   

---    
## 147 Insertion Sort List   
Problem url:<https://leetcode.com/problems/insertion-sort-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/insertion-sort-list>    
Difficulty:  Medium(227.100000)   

```   
Sort a linked list using insertion sort.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        
    }
};
```   

---    
## 148 Sort List   
Problem url:<https://leetcode.com/problems/sort-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sort-list>    
Difficulty:  Medium(222.600000)   

```   
Sort a linked list in O(n log n) time using constant space complexity.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
    }
};
```   

---    
## 149 Max Points on a Line   
Problem url:<https://leetcode.com/problems/max-points-on-a-line/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/max-points-on-a-line>    
Difficulty:  Hard(313.100000)   

```   
Given n points on a 2D plane, find the maximum number of points that lie on the same straight line.
```   

```   
/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        
    }
};
```   

---    
## 150 Evaluate Reverse Polish Notation   
Problem url:<https://leetcode.com/problems/evaluate-reverse-polish-notation/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/evaluate-reverse-polish-notation>    
Difficulty:  Medium(221.600000)   

```   

Evaluate the value of an arithmetic expression in Reverse Polish Notation.


Valid operators are +, -, *, /. Each operand may be an integer or another expression.


Some examples:

  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6


```   

```   
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
    }
};
```   

---    
## 151 Reverse Words in a String   
Problem url:<https://leetcode.com/problems/reverse-words-in-a-string/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-words-in-a-string>    
Difficulty:  Medium(215.300000)   

```   

Given an input string, reverse the string word by word.


For example,
Given s = "the sky is blue",
return "blue is sky the".


Update (2015-02-12):
For C programmers: Try to solve it in-place in O(1) space.

click to show clarification.
Clarification:


What constitutes a word?
A sequence of non-space characters constitutes a word.
Could the input string contain leading or trailing spaces?
Yes. However, your reversed string should not contain leading or trailing spaces.
How about multiple spaces between two words?
Reduce them to a single space in the reversed string.



```   

```   
class Solution {
public:
    void reverseWords(string &s) {
        
    }
};
```   

---    
## 152 Maximum Product Subarray   
Problem url:<https://leetcode.com/problems/maximum-product-subarray/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximum-product-subarray>    
Difficulty:  Medium(219.900000)   

```   

Find the contiguous subarray within an array (containing at least one number) which has the largest product.


For example, given the array [2,3,-2,4],
the contiguous subarray [2,3] has the largest product = 6.

```   

```   
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
    }
};
```   

---    
## 153 Find Minimum in Rotated Sorted Array   
Problem url:<https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/find-minimum-in-rotated-sorted-array>    
Difficulty:  Medium(233.800000)   

```   
Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
Find the minimum element.
You may assume no duplicate exists in the array.
```   

```   
class Solution {
public:
    int findMin(vector<int>& nums) {
        
    }
};
```   

---    
## 154 Find Minimum in Rotated Sorted Array II   
Problem url:<https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/find-minimum-in-rotated-sorted-array-ii>    
Difficulty:  Hard(332.400000)   

```   

Follow up for "Find Minimum in Rotated Sorted Array":
What if duplicates are allowed?
Would this affect the run-time complexity? How and why?

Suppose a sorted array is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
Find the minimum element.
The array may contain duplicates.
```   

```   
class Solution {
public:
    int findMin(vector<int>& nums) {
        
    }
};
```   

---    
## 155 Min Stack   
Problem url:<https://leetcode.com/problems/min-stack/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/min-stack>    
Difficulty:  Easy(120.000000)   

```   

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.


push(x) -- Push element x onto stack.


pop() -- Removes the element on top of the stack.


top() -- Get the top element.


getMin() -- Retrieve the minimum element in the stack.



```   

```   
class MinStack {
public:
    void push(int x) {
        
    }

    void pop() {
        
    }

    int top() {
        
    }

    int getMin() {
        
    }
};
```   

---    
## 156 Binary Tree Upside Down   
Problem url:<https://leetcode.com/problems/binary-tree-upside-down/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-upside-down>    
Difficulty:  Medium(234.600000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 157 Read N Characters Given Read4   
Problem url:<https://leetcode.com/problems/read-n-characters-given-read4/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/read-n-characters-given-read4>    
Difficulty:  Easy(129.800000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 158 Read N Characters Given Read4 II - Call multiple times   
Problem url:<https://leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/read-n-characters-given-read4-ii---call-multiple-times>    
Difficulty:  Hard(323.000000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 159 Longest Substring with At Most Two Distinct Characters   
Problem url:<https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/longest-substring-with-at-most-two-distinct-characters>    
Difficulty:  Hard(330.800000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 160 Intersection of Two Linked Lists   
Problem url:<https://leetcode.com/problems/intersection-of-two-linked-lists/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/intersection-of-two-linked-lists>    
Difficulty:  Easy(129.200000)   

```   
Write a program to find the node at which the intersection of two singly linked lists begins.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    }
};
```   

---    
## 161 One Edit Distance   
Problem url:<https://leetcode.com/problems/one-edit-distance/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/one-edit-distance>    
Difficulty:  Medium(225.000000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 162 Find Peak Element   
Problem url:<https://leetcode.com/problems/find-peak-element/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/find-peak-element>    
Difficulty:  Medium(232.100000)   

```   
A peak element is an element that is greater than its neighbors.
Given an input array where num[i] ≠ num[i+1], find a peak element and return its index.
The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
You may imagine that num[-1] = num[n] = -∞.
For example, in array [1, 2, 3, 1], 3 is a peak element and your function should return the index number 2.
click to show spoilers.
Note:
Your solution should be in logarithmic complexity.

Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
    }
};
```   

---    
## 163 Missing Ranges   
Problem url:<https://leetcode.com/problems/missing-ranges/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/missing-ranges>    
Difficulty:  Medium(224.500000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 164 Maximum Gap   
Problem url:<https://leetcode.com/problems/maximum-gap/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximum-gap>    
Difficulty:  Hard(324.800000)   

```   
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.
Try to solve it in linear time/space.
Return 0 if the array contains less than 2 elements.
You may assume all elements in the array are non-negative integers and fit in the 32-bit signed integer range.
Credits:Special thanks to @porker2008 for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
    }
};
```   

---    
## 165 Compare Version Numbers   
Problem url:<https://leetcode.com/problems/compare-version-numbers/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/compare-version-numbers>    
Difficulty:  Easy(115.500000)   

```   
Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.
You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.
Here is an example of version numbers ordering:
0.1 < 1.1 < 1.2 < 13.37
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int compareVersion(string version1, string version2) {
        
    }
};
```   

---    
## 166 Fraction to Recurring Decimal   
Problem url:<https://leetcode.com/problems/fraction-to-recurring-decimal/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/fraction-to-recurring-decimal>    
Difficulty:  Medium(213.300000)   

```   
Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
If the fractional part is repeating, enclose the repeating part in parentheses.

For example,

Given numerator = 1, denominator = 2, return "0.5".
Given numerator = 2, denominator = 1, return "2".
Given numerator = 2, denominator = 3, return "0.(6)".


Credits:Special thanks to @Shangrila for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        
    }
};
```   

---    
## 167 Two Sum II - Input array is sorted   
Problem url:<https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/two-sum-ii---input-array-is-sorted>    
Difficulty:  Medium(243.800000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 168 Excel Sheet Column Title   
Problem url:<https://leetcode.com/problems/excel-sheet-column-title/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/excel-sheet-column-title>    
Difficulty:  Easy(118.600000)   

```   
Given a positive integer, return its corresponding column title as appear in an Excel sheet.
For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
Credits:Special thanks to @ifanchu for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    string convertToTitle(int n) {
        
    }
};
```   

---    
## 169 Majority Element   
Problem url:<https://leetcode.com/problems/majority-element/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/majority-element>    
Difficulty:  Easy(136.300000)   

```   
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    }
};
```   

---    
## 170 Two Sum III - Data structure design   
Problem url:<https://leetcode.com/problems/two-sum-iii-data-structure-design/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/two-sum-iii---data-structure-design>    
Difficulty:  Easy(125.100000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 171 Excel Sheet Column Number   
Problem url:<https://leetcode.com/problems/excel-sheet-column-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/excel-sheet-column-number>    
Difficulty:  Easy(136.900000)   

```   
Related to question Excel Sheet Column Title
Given a column title as appear in an Excel sheet, return its corresponding column number.
For example:
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int titleToNumber(string s) {
        
    }
};
```   

---    
## 172 Factorial Trailing Zeroes   
Problem url:<https://leetcode.com/problems/factorial-trailing-zeroes/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/factorial-trailing-zeroes>    
Difficulty:  Easy(129.400000)   

```   
Given an integer n, return the number of trailing zeroes in n!.
Note: Your solution should be in logarithmic time complexity.
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int trailingZeroes(int n) {
        
    }
};
```   

---    
## 173 Binary Search Tree Iterator   
Problem url:<https://leetcode.com/problems/binary-search-tree-iterator/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-search-tree-iterator>    
Difficulty:  Medium(230.100000)   

```   
Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.
Calling next() will return the next smallest number in the BST.
Note: next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree. 
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        
    }

    /** @return the next smallest number */
    int next() {
        
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
```   

---    
## 174 Dungeon Game   
Problem url:<https://leetcode.com/problems/dungeon-game/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/dungeon-game>    
Difficulty:  Hard(318.400000)   

```   

table.dungeon, .dungeon th, .dungeon td {
  border:3px solid black;
}

 .dungeon th, .dungeon td {
    text-align: center;
    height: 70px;
    width: 70px;
}

The demons had captured the princess (P) and imprisoned her in the bottom-right corner of a dungeon. The dungeon consists of M x N rooms laid out in a 2D grid. Our valiant knight (K) was initially positioned in the top-left room and must fight his way through the dungeon to rescue the princess. 
The knight has an initial health point represented by a positive integer. If at any point his health point drops to 0 or below, he dies immediately. 
Some of the rooms are guarded by demons, so the knight loses health (negative integers) upon entering these rooms; 
other rooms are either empty (0's) or contain magic orbs that increase the knight's health (positive integers).
In order to reach the princess as quickly as possible, the knight decides to move only rightward or downward in each step. 

Write a function to determine the knight's minimum initial health so that he is able to rescue the princess.
For example, given the dungeon below, the initial health of the knight must be at least 7 if he follows the optimal path RIGHT-> RIGHT -> DOWN -> DOWN.


-2 (K)
-3
3


-5
-10
1


10
30
-5 (P)


-2K   -3  3
-5   -10   1
10 30   5P

Notes:

The knight's health has no upper bound.
Any room can contain threats or power-ups, even the first room the knight enters and the bottom-right room where the princess is imprisoned.  


Credits:Special thanks to @stellari for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        
    }
};
```   

---    
## 179 Largest Number   
Problem url:<https://leetcode.com/problems/largest-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/largest-number>    
Difficulty:  Medium(216.500000)   

```   
Given a list of non negative integers, arrange them such that they form the largest number.
For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
Note: The result may be very large, so you need to return a string instead of an integer.
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
    }
};
```   

---    
## 186 Reverse Words in a String II   
Problem url:<https://leetcode.com/problems/reverse-words-in-a-string-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-words-in-a-string-ii>    
Difficulty:  Medium(231.700000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 187 Repeated DNA Sequences   
Problem url:<https://leetcode.com/problems/repeated-dna-sequences/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/repeated-dna-sequences>    
Difficulty:  Medium(220.800000)   

```   

All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.
Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

For example,

Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",

Return:
["AAAAACCCCC", "CCCCCAAAAA"].

```   

```   
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
    }
};
```   

---    
## 188 Best Time to Buy and Sell Stock IV   
Problem url:<https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/best-time-to-buy-and-sell-stock-iv>    
Difficulty:  Hard(319.000000)   

```   
Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete at most k transactions.
Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
Credits:Special thanks to @Freezen for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
    }
};
```   

---    
## 189 Rotate Array   
Problem url:<https://leetcode.com/problems/rotate-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/rotate-array>    
Difficulty:  Easy(118.400000)   

```   
Rotate an array of n elements to the right by k steps.
For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4]. 
Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

[show hint]
Hint:
Could you do it in-place with O(1) extra space?

Related problem: Reverse Words in a String II
Credits:Special thanks to @Freezen for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    }
};
```   

---    
## 190 Reverse Bits   
Problem url:<https://leetcode.com/problems/reverse-bits/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-bits>    
Difficulty:  Easy(129.100000)   

```   
Reverse bits of a given 32 bits unsigned integer.
For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).

Follow up:
If this function is called many times, how would you optimize it?

Related problem: Reverse Integer
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
    }
};
```   

---    
## 191 Number of 1 Bits   
Problem url:<https://leetcode.com/problems/number-of-1-bits/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/number-of-1-bits>    
Difficulty:  Easy(138.100000)   

```   
Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).
For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
    }
};
```   

---    
## 198 House Robber   
Problem url:<https://leetcode.com/problems/house-robber/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/house-robber>    
Difficulty:  Easy(130.100000)   

```   
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
Credits:Special thanks to @ifanchu for adding this problem and creating all test cases. Also thanks to @ts for adding additional test cases.
```   

```   
class Solution {
public:
    int rob(vector<int>& nums) {
        
    }
};
```   

---    
## 199 Binary Tree Right Side View   
Problem url:<https://leetcode.com/problems/binary-tree-right-side-view/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-right-side-view>    
Difficulty:  Medium(228.700000)   

```   
Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

For example:
Given the following binary tree,

   1            <---
 /   \
2     3         <---
 \     \
  5     4       <---



You should return [1, 3, 4].

Credits:Special thanks to @amrsaqr for adding this problem and creating all test cases.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
    }
};
```   

---    
## 200 Number of Islands   
Problem url:<https://leetcode.com/problems/number-of-islands/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/number-of-islands>    
Difficulty:  Medium(223.400000)   

```   
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.
Example 1:
11110110101100000000
Answer: 1
Example 2:
11000110000010000011
Answer: 3
Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
    }
};
```   

---    
## 201 Bitwise AND of Numbers Range   
Problem url:<https://leetcode.com/problems/bitwise-and-of-numbers-range/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/bitwise-and-of-numbers-range>    
Difficulty:  Medium(226.400000)   

```   
Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

For example, given the range [5, 7], you should return 4.

Credits:Special thanks to @amrsaqr for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
    }
};
```   

---    
## 202 Happy Number   
Problem url:<https://leetcode.com/problems/happy-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/happy-number>    
Difficulty:  Easy(132.500000)   

```   
Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
Example: 19 is a happy number

12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Credits:Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    bool isHappy(int n) {
        
    }
};
```   

---    
## 203 Remove Linked List Elements   
Problem url:<https://leetcode.com/problems/remove-linked-list-elements/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/remove-linked-list-elements>    
Difficulty:  Easy(125.600000)   

```   
Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6,  val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5

Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
    }
};
```   

---    
## 204 Count Primes   
Problem url:<https://leetcode.com/problems/count-primes/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/count-primes>    
Difficulty:  Easy(120.600000)   

```   
Description:
Count the number of prime numbers less than a non-negative number, n.
Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.

Let's start with a isPrime function. To determine if a number is prime, we need to check if it is not divisible by any number less than n. The runtime complexity of isPrime function would be O(n) and hence counting the total prime numbers up to n would be O(n2). Could we do better?

As we know the number must not be divisible by any number > n / 2, we can immediately cut the total iterations half by dividing only up to n / 2. Could we still do better?

Let's write down all of 12's factors:

2 × 6 = 12
3 × 4 = 12
4 × 3 = 12
6 × 2 = 12

As you can see, calculations of 4 × 3 and 6 × 2 are not necessary. Therefore, we only need to consider factors up to √n because, if n is divisible by some number p, then n = p × q and since p ≤ q, we could derive that p ≤ √n.
Our total runtime has now improved to O(n1.5), which is slightly better. Is there a faster approach?

public int countPrimes(int n) {
   int count = 0;
   for (int i = 1; i < n; i++) {
      if (isPrime(i)) count++;
   }
   return count;
}

private boolean isPrime(int num) {
   if (num <= 1) return false;
   // Loop's ending condition is i * i <= num instead of i <= sqrt(num)
   // to avoid repeatedly calling an expensive function sqrt().
   for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) return false;
   }
   return true;
}


The Sieve of Eratosthenes is one of the most efficient ways to find all prime numbers up to n. But don't let that name scare you, I promise that the concept is surprisingly simple.


Sieve of Eratosthenes: algorithm steps for primes below 121. "Sieve of Eratosthenes Animation" by SKopp is licensed under CC BY 2.0.

We start off with a table of n numbers. Let's look at the first number, 2. We know all multiples of 2 must not be primes, so we mark them off as non-primes. Then we look at the next number, 3. Similarly, all multiples of 3 such as 3 × 2 = 6, 3 × 3 = 9, ... must not be primes, so we mark them off as well. Now we look at the next number, 4, which was already marked off. What does this tell you? Should you mark off all multiples of 4 as well?

4 is not a prime because it is divisible by 2, which means all multiples of 4 must also be divisible by 2 and were already marked off. So we can skip 4 immediately and go to the next number, 5. Now, all multiples of 5 such as 5 × 2 = 10, 5 × 3 = 15, 5 × 4 = 20, 5 × 5 = 25, ... can be marked off. There is a slight optimization here, we do not need to start from 5 × 2 = 10. Where should we start marking off?

In fact, we can mark off multiples of 5 starting at 5 × 5 = 25, because 5 × 2 = 10 was already marked off by multiple of 2, similarly 5 × 3 = 15 was already marked off by multiple of 3. Therefore, if the current number is p, we can always mark off multiples of p starting at p2, then in increments of p: p2 + p, p2 + 2p, ... Now what should be the terminating loop condition?

It is easy to say that the terminating loop condition is p < n, which is certainly correct but not efficient. Do you still remember Hint #3?

Yes, the terminating loop condition can be p < √n, as all non-primes ≥ √n must have already been marked off. When the loop terminates, all the numbers in the table that are non-marked are prime.
The Sieve of Eratosthenes uses an extra O(n) memory and its runtime complexity is O(n log log n). For the more mathematically inclined readers, you can read more about its algorithm complexity on Wikipedia.

public int countPrimes(int n) {
   boolean[] isPrime = new boolean[n];
   for (int i = 2; i < n; i++) {
      isPrime[i] = true;
   }
   // Loop's ending condition is i * i < n instead of i < sqrt(n)
   // to avoid repeatedly calling an expensive function sqrt().
   for (int i = 2; i * i < n; i++) {
      if (!isPrime[i]) continue;
      for (int j = i * i; j < n; j += i) {
         isPrime[j] = false;
      }
   }
   int count = 0;
   for (int i = 2; i < n; i++) {
      if (isPrime[i]) count++;
   }
   return count;
}



```   

```   
class Solution {
public:
    int countPrimes(int n) {
        
    }
};
```   

---    
## 205 Isomorphic Strings   
Problem url:<https://leetcode.com/problems/isomorphic-strings/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/isomorphic-strings>    
Difficulty:  Easy(125.100000)   

```   
Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.
For example,
Given "egg", "add", return true.
Given "foo", "bar", return false.
Given "paper", "title", return true.
Note:
You may assume both s and t have the same length.
```   

```   
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
    }
};
```   

---    
## 206 Reverse Linked List   
Problem url:<https://leetcode.com/problems/reverse-linked-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/reverse-linked-list>    
Difficulty:  Easy(133.500000)   

```   
Reverse a singly linked list.
click to show more hints.
Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both?

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
    }
};
```   

---    
## 207 Course Schedule   
Problem url:<https://leetcode.com/problems/course-schedule/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/course-schedule>    
Difficulty:  Medium(222.700000)   

```   

There are a total of n courses you have to take, labeled from 0 to n - 1.
Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

For example:
2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.
2, [[1,0],[0,1]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
Note:
The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.

click to show more hints.
Hints:

This problem is equivalent to finding if a cycle exists in a directed graph. If a cycle exists, no topological ordering exists and therefore it will be impossible to take all courses.
Topological Sort via DFS - A great video tutorial (21 minutes) on Coursera explaining the basic concepts of Topological Sort.
Topological sort could also be done via BFS.


```   

```   
class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        
    }
};
```   

---    
## 208 Implement Trie (Prefix Tree)   
Problem url:<https://leetcode.com/problems/implement-trie-prefix-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/implement-trie-(prefix-tree)>    
Difficulty:  Medium(224.900000)   

```   

Implement a trie with insert, search, and startsWith methods.


Note:
You may assume that all inputs are consist of lowercase letters a-z.

```   

```   
class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        
    }

private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");
```   

---    
## 209 Minimum Size Subarray Sum   
Problem url:<https://leetcode.com/problems/minimum-size-subarray-sum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/minimum-size-subarray-sum>    
Difficulty:  Medium(223.800000)   

```   

Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ≥ s. If there isn't one, return 0 instead.


For example, given the array [2,3,1,2,4,3] and s = 7,
the subarray [4,3] has the minimal length under the problem constraint.

click to show more practice.
More practice:
If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log n).

Credits:Special thanks to @Freezen for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
    }
};
```   

---    
## 210 Course Schedule II   
Problem url:<https://leetcode.com/problems/course-schedule-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/course-schedule-ii>    
Difficulty:  Medium(220.200000)   

```   

There are a total of n courses you have to take, labeled from 0 to n - 1.
Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.
There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

For example:
2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1]
4, [[1,0],[2,0],[3,1],[3,2]]
There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. So one correct course order is [0,1,2,3]. Another correct ordering is[0,2,1,3].
Note:
The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.

click to show more hints.
Hints:

This problem is equivalent to finding the topological order in a directed graph. If a cycle exists, no topological ordering exists and therefore it will be impossible to take all courses.
Topological Sort via DFS - A great video tutorial (21 minutes) on Coursera explaining the basic concepts of Topological Sort.
Topological sort could also be done via BFS.


```   

```   
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        
    }
};
```   

---    
## 211 Add and Search Word - Data structure design   
Problem url:<https://leetcode.com/problems/add-and-search-word-data-structure-design/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/add-and-search-word---data-structure-design>    
Difficulty:  Medium(220.500000)   

```   

Design a data structure that supports the following two operations:


void addWord(word)
bool search(word)


search(word) can search a literal word or a regular expression string containing only letters a-z or .. A . means it can represent any one letter.

For example:

addWord("bad")
addWord("dad")
addWord("mad")
search("pad") -> false
search("bad") -> true
search(".ad") -> true
search("b..") -> true


Note:
You may assume that all words are consist of lowercase letters a-z.

click to show hint.
You should be familiar with how a Trie works. If not, please work on this problem: Implement Trie (Prefix Tree) first.

```   

```   
class WordDictionary {
public:

    // Adds a word into the data structure.
    void addWord(string word) {
        
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
        
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");
```   

---    
## 212 Word Search II   
Problem url:<https://leetcode.com/problems/word-search-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/word-search-ii>    
Difficulty:  Hard(315.400000)   

```   

Given a 2D board and a list of words from the dictionary, find all words in the board.


Each word must be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once in a word.


For example,
Given words = ["oath","pea","eat","rain"] and board = 

[
  ['o','a','a','n'],
  ['e','t','a','e'],
  ['i','h','k','r'],
  ['i','f','l','v']
]


Return ["eat","oath"].


Note:
You may assume that all inputs are consist of lowercase letters a-z.

click to show hint.
You would need to optimize your backtracking to pass the larger test. Could you stop backtracking earlier?
If the current candidate does not exist in all words' prefix, you could stop backtracking immediately. What kind of data structure could answer such query efficiently? Does a hash table work? Why or why not? How about a Trie? If you would like to learn how to implement a basic trie, please work on this problem: Implement Trie (Prefix Tree) first.

```   

```   
class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
    }
};
```   

---    
## 213 House Robber II   
Problem url:<https://leetcode.com/problems/house-robber-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/house-robber-ii>    
Difficulty:  Medium(227.300000)   

```   
Note: This is an extension of House Robber.
After robbing those houses on that street, the thief has found himself a new place for his thievery so that he will not get too much attention. This time, all houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, the security system for these houses remain the same as for those in the previous street. 
Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
Credits:Special thanks to @Freezen for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int rob(vector<int>& nums) {
        
    }
};
```   

---    
## 214 Shortest Palindrome   
Problem url:<https://leetcode.com/problems/shortest-palindrome/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/shortest-palindrome>    
Difficulty:  Hard(316.700000)   

```   

Given a string S, you are allowed to convert it to a palindrome by adding characters in front of it. Find and return the shortest palindrome you can find by performing this transformation.

For example: 
Given "aacecaaa", return "aaacecaaa".
Given "abcd", return "dcbabcd".
Credits:Special thanks to @ifanchu for adding this problem and creating all test cases. Thanks to @Freezen for additional test cases.
```   

```   
class Solution {
public:
    string shortestPalindrome(string s) {
        
    }
};
```   

---    
## 215 Kth Largest Element in an Array   
Problem url:<https://leetcode.com/problems/kth-largest-element-in-an-array/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/kth-largest-element-in-an-array>    
Difficulty:  Medium(227.700000)   

```   
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

For example,
Given [3,2,1,5,6,4] and k = 2, return 5.

Note: 
You may assume k is always valid, 1 ≤ k ≤ array's length.
Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
    }
};
```   

---    
## 216 Combination Sum III   
Problem url:<https://leetcode.com/problems/combination-sum-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/combination-sum-iii>    
Difficulty:  Medium(229.900000)   

```   

Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.
Ensure that numbers within the set are sorted in ascending order.



 Example 1:
Input:  k = 3,  n = 7
Output: 

[[1,2,4]]


 Example 2:
Input:  k = 3,  n = 9
Output: 

[[1,2,6], [1,3,5], [2,3,4]]


Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
    }
};
```   

---    
## 217 Contains Duplicate   
Problem url:<https://leetcode.com/problems/contains-duplicate/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/contains-duplicate>    
Difficulty:  Easy(137.000000)   

```   

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

```   

```   
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    }
};
```   

---    
## 218 The Skyline Problem   
Problem url:<https://leetcode.com/problems/the-skyline-problem/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/the-skyline-problem>    
Difficulty:  Hard(317.200000)   

```   
A city's skyline is the outer contour of the silhouette formed by all the buildings in that city when viewed from a distance. Now suppose you are given the locations and height of all the buildings as shown on a cityscape photo (Figure A), write a program to output the skyline formed by these buildings collectively (Figure B).
 Cityscape 



 Use this image for the 'turning point' description of skyline 



 Use the following image if we'd like to define the output as 'horizontal lines' rather than 'turning points'

<a href="http://tinypic.com?ref=mij3wi" target="_blank">
<img style="max-width: 45%;" src="http://i59.tinypic.com/mij3wi.jpg" border="0" alt="Skyline Contour">
</a>

The geometric information of each building is represented by a triplet of integers [Li, Ri, Hi], where Li and Ri are the x coordinates of the left and right edge of the ith building, respectively, and Hi is its height. It is guaranteed that 0 ≤ Li, Ri ≤ INT_MAX, 0 < Hi ≤ INT_MAX, and Ri - Li > 0. You may assume all buildings are perfect rectangles grounded on an absolutely flat surface at height 0.
For instance, the dimensions of all buildings in Figure A are recorded as: [ [2 9 10], [3 7 15], [5 12 12], [15 20 10], [19 24 8] ] .
The output is a list of "key points" (red dots in Figure B) in the format of [ [x1,y1], [x2, y2], [x3, y3], ... ] that uniquely defines a skyline. A key point is the left endpoint of a horizontal line segment. Note that the last key point, where the rightmost building ends, is merely used to mark the termination of the skyline, and always has zero height. Also, the ground in between any two adjacent buildings should be considered part of the skyline contour.

For instance, the skyline in Figure B should be represented as:[ [2 10], [3 15], [7 12], [12 0], [15 10], [20 8], [24, 0] ].
Notes:

 The number of buildings in any input list is guaranteed to be in the range [0, 10000].
 The input list is already sorted in ascending order by the left x position Li. 
 The output list must be sorted by the x position. 
 There must be no consecutive horizontal lines of equal height in the output skyline. For instance, [...[2 3], [4 5], [7 5], [11 5], [12 7]...] is not acceptable; the three lines of height 5 should be merged into one in the final output as such: [...[2 3], [4 5], [12 7], ...]


Credits:Special thanks to @stellari for adding this problem, creating these two awesome images and all test cases.

Show Tags

Divide and Conquer
Heap



```   

```   
class Solution {
public:
    vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
        
    }
};
```   

---    
## 219 Contains Duplicate II   
Problem url:<https://leetcode.com/problems/contains-duplicate-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/contains-duplicate-ii>    
Difficulty:  Easy(126.300000)   

```   

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.

```   

```   
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
    }
};
```   

---    
## 220 Contains Duplicate III   
Problem url:<https://leetcode.com/problems/contains-duplicate-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/contains-duplicate-iii>    
Difficulty:  Medium(216.200000)   

```   

Given an array of integers, find out whether there are two distinct indices i and j in the array such that the difference between nums[i] and nums[j] is at most t and the difference between i and j is at most k.

```   

```   
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
    }
};
```   

---    
## 221 Maximal Square   
Problem url:<https://leetcode.com/problems/maximal-square/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/maximal-square>    
Difficulty:  Medium(220.300000)   

```   

Given a 2D binary matrix filled with 0's and 1's, find the largest square containing all 1's and return its area.

For example, given the following matrix:

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Return 4.

Credits:Special thanks to @Freezen for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
    }
};
```   

---    
## 222 Count Complete Tree Nodes   
Problem url:<https://leetcode.com/problems/count-complete-tree-nodes/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/count-complete-tree-nodes>    
Difficulty:  Medium(221.200000)   

```   
Given a complete binary tree, count the number of nodes.
Definition of a complete binary tree from Wikipedia:
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        
    }
};
```   

---    
## 223 Rectangle Area   
Problem url:<https://leetcode.com/problems/rectangle-area/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/rectangle-area>    
Difficulty:  Easy(126.200000)   

```   
Find the total area covered by two rectilinear rectangles in a 2D plane.
Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.




Assume that the total area is never beyond the maximum possible value of int.

Credits:Special thanks to @mithmatt for adding this problem, creating the above image and all test cases.
```   

```   
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        
    }
};
```   

---    
## 224 Basic Calculator   
Problem url:<https://leetcode.com/problems/basic-calculator/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/basic-calculator>    
Difficulty:  Medium(217.500000)   

```   
Implement a basic calculator to evaluate a simple expression string.
The expression string may contain open ( and closing parentheses ), the plus + or minus sign -, non-negative integers and empty spaces  .
You may assume that the given expression is always valid.
Some examples:

"1 + 1" = 2
" 2-1 + 2 " = 3
"(1+(4+5+2)-3)+(6+8)" = 23



Note: Do not use the eval built-in library function.

```   

```   
class Solution {
public:
    int calculate(string s) {
        
    }
};
```   

---    
## 225 Implement Stack using Queues   
Problem url:<https://leetcode.com/problems/implement-stack-using-queues/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/implement-stack-using-queues>    
Difficulty:  Easy(130.500000)   

```   

Implement the following operations of a stack using queues.


push(x) -- Push element x onto stack.


pop() -- Removes the element on top of the stack.


top() -- Get the top element.


empty() -- Return whether the stack is empty.


Notes:

You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.
Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.
You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).



Update (2015-06-11):
The class name of the Java function had been updated to MyStack instead of Stack.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and all test cases.
```   

```   
class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        
    }

    // Removes the element on top of the stack.
    void pop() {
        
    }

    // Get the top element.
    int top() {
        
    }

    // Return whether the stack is empty.
    bool empty() {
        
    }
};
```   

---    
## 226 Invert Binary Tree   
Problem url:<https://leetcode.com/problems/invert-binary-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/invert-binary-tree>    
Difficulty:  Easy(138.800000)   

```   
Invert a binary tree.
     4
   /   \
  2     7
 / \   / \
1   3 6   9

to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
Trivia:
This problem was inspired by this original tweet by Max Howell:
Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
    }
};
```   

---    
## 227 Basic Calculator II   
Problem url:<https://leetcode.com/problems/basic-calculator-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/basic-calculator-ii>    
Difficulty:  Medium(219.700000)   

```   
Implement a basic calculator to evaluate a simple expression string.
The expression string contains only non-negative integers, +, -, *, / operators and empty spaces  . The integer division should truncate toward zero.
You may assume that the given expression is always valid.
Some examples:

"3+2*2" = 7
" 3/2 " = 1
" 3+5 / 2 " = 5



Note: Do not use the eval built-in library function.

Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int calculate(string s) {
        
    }
};
```   

---    
## 228 Summary Ranges   
Problem url:<https://leetcode.com/problems/summary-ranges/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/summary-ranges>    
Difficulty:  Easy(119.300000)   

```   

Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
    }
};
```   

---    
## 229 Majority Element II   
Problem url:<https://leetcode.com/problems/majority-element-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/majority-element-ii>    
Difficulty:  Medium(222.600000)   

```   
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times. The algorithm should run in linear time and in O(1) space.

How many majority elements could it possibly have?
Do you have a better hint? Suggest it!

```   

```   
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
    }
};
```   

---    
## 230 Kth Smallest Element in a BST   
Problem url:<https://leetcode.com/problems/kth-smallest-element-in-a-bst/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/kth-smallest-element-in-a-bst>    
Difficulty:  Medium(231.000000)   

```   
Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.
Note: 
You may assume k is always valid, 1 ≤ k ≤ BST's total elements.
Follow up:
What if the BST is modified (insert/delete operations) often and you need to find the kth smallest frequently? How would you optimize the kthSmallest routine?

Try to utilize the property of a BST.
What if you could modify the BST node's structure?
The optimal runtime complexity is O(height of BST).

Credits:Special thanks to @ts for adding this problem and creating all test cases.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        
    }
};
```   

---    
## 231 Power of Two   
Problem url:<https://leetcode.com/problems/power-of-two/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/power-of-two>    
Difficulty:  Easy(131.100000)   

```   

Given an integer, write a function to determine if it is a power of two.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
    }
};
```   

---    
## 232 Implement Queue using Stacks   
Problem url:<https://leetcode.com/problems/implement-queue-using-stacks/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/implement-queue-using-stacks>    
Difficulty:  Easy(133.800000)   

```   

Implement the following operations of a queue using stacks.


push(x) -- Push element x to the back of queue.


pop() -- Removes the element from in front of queue.


peek() -- Get the front element.


empty() -- Return whether the queue is empty.


Notes:

You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).


```   

```   
class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        
    }

    // Removes the element from in front of queue.
    void pop(void) {
        
    }

    // Get the front element.
    int peek(void) {
        
    }

    // Return whether the queue is empty.
    bool empty(void) {
        
    }
};
```   

---    
## 233 Number of Digit One   
Problem url:<https://leetcode.com/problems/number-of-digit-one/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/number-of-digit-one>    
Difficulty:  Medium(220.500000)   

```   
Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

For example: 
Given n = 13,
Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13.


Beware of overflow.

```   

```   
class Solution {
public:
    int countDigitOne(int n) {
        
    }
};
```   

---    
## 234 Palindrome Linked List   
Problem url:<https://leetcode.com/problems/palindrome-linked-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-linked-list>    
Difficulty:  Easy(122.700000)   

```   
Given a singly linked list, determine if it is a palindrome.
Follow up:
Could you do it in O(n) time and O(1) space?
```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
    }
};
```   

---    
## 235 Lowest Common Ancestor of a Binary Search Tree   
Problem url:<https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/lowest-common-ancestor-of-a-binary-search-tree>    
Difficulty:  Easy(138.100000)   

```   

Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.


According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”


        _______6______
       /              \
    ___2__          ___8__
   /      \        /      \
   0      _4       7       9
         /  \
         3   5


For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
```   

---    
## 236 Lowest Common Ancestor of a Binary Tree   
Problem url:<https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/lowest-common-ancestor-of-a-binary-tree>    
Difficulty:  Medium(227.300000)   

```   

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.


According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”


        _______3______
       /              \
    ___5__          ___1__
   /      \        /      \
   6      _2       0       8
         /  \
         7   4


For example, the lowest common ancestor (LCA) of nodes 5 and 1 is 3. Another example is LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
```   

---    
## 237 Delete Node in a Linked List   
Problem url:<https://leetcode.com/problems/delete-node-in-a-linked-list/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/delete-node-in-a-linked-list>    
Difficulty:  Easy(145.000000)   

```   

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.


Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.

```   

```   
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
    }
};
```   

---    
## 238 Product of Array Except Self   
Problem url:<https://leetcode.com/problems/product-of-array-except-self/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/product-of-array-except-self>    
Difficulty:  Medium(236.000000)   

```   

Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
Solve it without division and in O(n).
For example, given [1,2,3,4], return [24,12,8,6].

Follow up:
Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

Show Tags

Array



Show Similar Problems

 (H) Trapping Rain Water
 (M) Maximum Product Subarray
 (H) Paint House II



```   

```   
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    }
};
```   

---    
## 239 Sliding Window Maximum   
Problem url:<https://leetcode.com/problems/sliding-window-maximum/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/sliding-window-maximum>    
Difficulty:  Hard(322.600000)   

```   
Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
For example,
Given nums = [1,3,-1,-3,5,3,6,7], and k = 3.

Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

Therefore, return the max sliding window as [3,3,5,5,6,7].
Note: 
You may assume k is always valid, ie: 1 ≤ k ≤ input array's size for non-empty array.
Follow up:
Could you solve it in linear time?

How about using a data structure such as deque (double-ended queue)?
The queue size need not be the same as the window’s size.
Remove redundant elements and the queue should store only elements that need to be considered.

```   

```   
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    }
};
```   

---    
## 240 Search a 2D Matrix II   
Problem url:<https://leetcode.com/problems/search-a-2d-matrix-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/search-a-2d-matrix-ii>    
Difficulty:  Medium(228.600000)   

```   
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:


Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.



For example,

Consider the following matrix:


[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]

Given target = 5, return true.
Given target = 20, return false.
```   

```   
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};
```   

---    
## 241 Different Ways to Add Parentheses   
Problem url:<https://leetcode.com/problems/different-ways-to-add-parentheses/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/different-ways-to-add-parentheses>    
Difficulty:  Medium(227.000000)   

```   
Given a string of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. The valid operators are +, - and *.

Example 1
Input: "2-1-1".
((2-1)-1) = 0
(2-(1-1)) = 2
Output: [0, 2]

Example 2
Input: "2*3-4*5"
(2*(3-(4*5))) = -34
((2*3)-(4*5)) = -14
((2*(3-4))*5) = -10
(2*((3-4)*5)) = -10
(((2*3)-4)*5) = 10
Output: [-34, -14, -10, -10, 10]
Credits:Special thanks to @mithmatt for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        
    }
};
```   

---    
## 242 Valid Anagram   
Problem url:<https://leetcode.com/problems/valid-anagram/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/valid-anagram>    
Difficulty:  Easy(135.200000)   

```   
Given two strings s and t, write a function to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.
```   

```   
class Solution {
public:
    bool isAnagram(string s, string t) {
        
    }
};
```   

---    
## 243 Shortest Word Distance   
Problem url:<https://leetcode.com/problems/shortest-word-distance/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/shortest-word-distance>    
Difficulty:  Easy(140.900000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 244 Shortest Word Distance II   
Problem url:<https://leetcode.com/problems/shortest-word-distance-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/shortest-word-distance-ii>    
Difficulty:  Medium(233.200000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 245 Shortest Word Distance III   
Problem url:<https://leetcode.com/problems/shortest-word-distance-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/shortest-word-distance-iii>    
Difficulty:  Medium(242.100000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 246 Strobogrammatic Number   
Problem url:<https://leetcode.com/problems/strobogrammatic-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/strobogrammatic-number>    
Difficulty:  Easy(130.900000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 247 Strobogrammatic Number II   
Problem url:<https://leetcode.com/problems/strobogrammatic-number-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/strobogrammatic-number-ii>    
Difficulty:  Medium(225.500000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 248 Strobogrammatic Number III   
Problem url:<https://leetcode.com/problems/strobogrammatic-number-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/strobogrammatic-number-iii>    
Difficulty:  Hard(320.800000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 249 Group Shifted Strings   
Problem url:<https://leetcode.com/problems/group-shifted-strings/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/group-shifted-strings>    
Difficulty:  Easy(124.600000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 250 Count Univalue Subtrees   
Problem url:<https://leetcode.com/problems/count-univalue-subtrees/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/count-univalue-subtrees>    
Difficulty:  Medium(232.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 251 Flatten 2D Vector   
Problem url:<https://leetcode.com/problems/flatten-2d-vector/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/flatten-2d-vector>    
Difficulty:  Medium(227.200000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 252 Meeting Rooms   
Problem url:<https://leetcode.com/problems/meeting-rooms/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/meeting-rooms>    
Difficulty:  Easy(134.100000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 253 Meeting Rooms II   
Problem url:<https://leetcode.com/problems/meeting-rooms-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/meeting-rooms-ii>    
Difficulty:  Medium(228.400000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 254 Factor Combinations   
Problem url:<https://leetcode.com/problems/factor-combinations/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/factor-combinations>    
Difficulty:  Medium(227.900000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 255 Verify Preorder Sequence in Binary Search Tree   
Problem url:<https://leetcode.com/problems/verify-preorder-sequence-in-binary-search-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/verify-preorder-sequence-in-binary-search-tree>    
Difficulty:  Medium(232.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 256 Paint House   
Problem url:<https://leetcode.com/problems/paint-house/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/paint-house>    
Difficulty:  Medium(238.100000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 257 Binary Tree Paths   
Problem url:<https://leetcode.com/problems/binary-tree-paths/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/binary-tree-paths>    
Difficulty:  Easy(121.200000)   

```   

Given a binary tree, return all root-to-leaf paths.


For example, given the following binary tree:



   1
 /   \
2     3
 \
  5



All root-to-leaf paths are:
["1->2->5", "1->3"]

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
    }
};
```   

---    
## 258 Add Digits   
Problem url:<https://leetcode.com/problems/add-digits/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/add-digits>    
Difficulty:  Easy(145.600000)   

```   

Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. 


For example:


Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?


A naive implementation of the above process is trivial. Could you come up with other methods? 
What are all the possible results?
How do they occur, periodically or randomly?
You may find this Wikipedia article useful.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int addDigits(int num) {
        
    }
};
```   

---    
## 259 3Sum Smaller   
Problem url:<https://leetcode.com/problems/3sum-smaller/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/3sum-smaller>    
Difficulty:  Medium(233.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 260 Single Number III   
Problem url:<https://leetcode.com/problems/single-number-iii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/single-number-iii>    
Difficulty:  Medium(236.600000)   

```   

Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.


For example:


Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].


Note:

The order of the result is not important. So in the above example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?


Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
    }
};
```   

---    
## 261 Graph Valid Tree   
Problem url:<https://leetcode.com/problems/graph-valid-tree/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/graph-valid-tree>    
Difficulty:  Medium(224.500000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 263 Ugly Number   
Problem url:<https://leetcode.com/problems/ugly-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/ugly-number>    
Difficulty:  Easy(131.800000)   

```   

Write a program to check whether a given number is an ugly number.


Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.


Note that 1 is typically treated as an ugly number.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    bool isUgly(int num) {
        
    }
};
```   

---    
## 264 Ugly Number II   
Problem url:<https://leetcode.com/problems/ugly-number-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/ugly-number-ii>    
Difficulty:  Medium(220.700000)   

```   

Write a program to find the n-th ugly number.


Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.


Note that 1 is typically treated as an ugly number.


The naive approach is to call isUgly for every number until you reach the nth one. Most numbers are not ugly. Try to focus your effort on generating only the ugly ones.
An ugly number must be multiplied by either 2, 3, or 5 from a smaller ugly number.
The key is how to maintain the order of the ugly numbers. Try a similar approach of merging from three sorted lists: L1, L2, and L3.
Assume you have Uk, the kth ugly number. Then Uk+1 must be Min(L1 * 2, L2 * 3, L3 * 5).

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int nthUglyNumber(int n) {
        
    }
};
```   

---    
## 265 Paint House II   
Problem url:<https://leetcode.com/problems/paint-house-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/paint-house-ii>    
Difficulty:  Hard(330.200000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 266 Palindrome Permutation   
Problem url:<https://leetcode.com/problems/palindrome-permutation/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-permutation>    
Difficulty:  Easy(144.400000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 267 Palindrome Permutation II   
Problem url:<https://leetcode.com/problems/palindrome-permutation-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/palindrome-permutation-ii>    
Difficulty:  Medium(222.100000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 268 Missing Number   
Problem url:<https://leetcode.com/problems/missing-number/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/missing-number>    
Difficulty:  Medium(233.500000)   

```   

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.


Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    }
};
```   

---    
## 269 Alien Dictionary   
Problem url:<https://leetcode.com/problems/alien-dictionary/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/alien-dictionary>    
Difficulty:  Hard(315.500000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 270 Closest Binary Search Tree Value   
Problem url:<https://leetcode.com/problems/closest-binary-search-tree-value/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/closest-binary-search-tree-value>    
Difficulty:  Easy(128.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 271 Encode and Decode Strings   
Problem url:<https://leetcode.com/problems/encode-and-decode-strings/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/encode-and-decode-strings>    
Difficulty:  Medium(226.700000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 272 Closest Binary Search Tree Value II   
Problem url:<https://leetcode.com/problems/closest-binary-search-tree-value-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/closest-binary-search-tree-value-ii>    
Difficulty:  Hard(326.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 273 Integer to English Words   
Problem url:<https://leetcode.com/problems/integer-to-english-words/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/integer-to-english-words>    
Difficulty:  Medium(215.000000)   

```   

Convert a non-negative integer to its english words representation. Given input is guaranteed to be less than 231 - 1.

For example,

123 -> "One Hundred Twenty Three"
12345 -> "Twelve Thousand Three Hundred Forty Five"
1234567 -> "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"

Did you see a pattern in dividing the number into chunk of words? For example, 123 and 123000.
Group the number by thousands (3 digits). You can write a helper function that takes a number less than 1000 and convert just that chunk to words.
There are many edge cases. What are some good test cases? Does your code work with input such as 0? Or 1000010? (middle chunk is zero and should not be printed out)

```   

```   
class Solution {
public:
    string numberToWords(int num) {
        
    }
};
```   

---    
## 274 H-Index   
Problem url:<https://leetcode.com/problems/h-index/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/h-index>    
Difficulty:  Medium(224.900000)   

```   

Given an array of citations (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.


According to the definition of h-index on Wikipedia: "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."


For example, given citations = [3, 0, 6, 1, 5], which means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively. Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, his h-index is 3.


Note: If there are several possible values for h, the maximum one is taken as the h-index.


An easy approach is to sort the array first.
What are the possible values of h-index?
A faster approach is to use extra space.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
    }
};
```   

---    
## 275 H-Index II   
Problem url:<https://leetcode.com/problems/h-index-ii/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/h-index-ii>    
Difficulty:  Medium(231.500000)   

```   

Follow up for H-Index: What if the citations array is sorted in ascending order? Could you optimize your algorithm?


Expected runtime complexity is in O(log n) and the input is sorted.

```   

```   
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
    }
};
```   

---    
## 276 Paint Fence   
Problem url:<https://leetcode.com/problems/paint-fence/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/paint-fence>    
Difficulty:  Easy(123.700000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 277 Find the Celebrity   
Problem url:<https://leetcode.com/problems/find-the-celebrity/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/find-the-celebrity>    
Difficulty:  Medium(231.500000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 278 First Bad Version   
Problem url:<https://leetcode.com/problems/first-bad-version/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/first-bad-version>    
Difficulty:  Easy(120.100000)   

```   

You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad. 


Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.


You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
    }
};
```   

---    
## 279 Perfect Squares   
Problem url:<https://leetcode.com/problems/perfect-squares/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/perfect-squares>    
Difficulty:  Medium(229.500000)   

```   

Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.


For example, given n = 12, return 3 because 12 = 4 + 4 + 4; given n = 13, return 2 because 13 = 4 + 9.

Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    int numSquares(int n) {
        
    }
};
```   

---    
## 280 Wiggle Sort   
Problem url:<https://leetcode.com/problems/wiggle-sort/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/wiggle-sort>    
Difficulty:  Medium(242.800000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 281 Zigzag Iterator   
Problem url:<https://leetcode.com/problems/zigzag-iterator/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/zigzag-iterator>    
Difficulty:  Medium(236.300000)   

```   
no problem description   

```   

```   
no code template    

```   

---    
## 282 Expression Add Operators   
Problem url:<https://leetcode.com/problems/expression-add-operators/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/expression-add-operators>    
Difficulty:  Hard(317.500000)   

```   

Given a string that contains only digits 0-9 and a target value, return all possibilities to add binary operators (not unary) +, -, or * between the digits so they evaluate to the target value.


Examples: 
"123", 6 -> ["1+2+3", "1*2*3"] 
"232", 8 -> ["2*3+2", "2+3*2"]
"105", 5 -> ["1*0+5","10-5"]
"00", 0 -> ["0+0", "0-0", "0*0"]
"3456237490", 9191 -> []

Credits:Special thanks to @davidtan1890 for adding this problem and creating all test cases.

Show Tags

Divide and Conquer



Show Similar Problems

 (M) Evaluate Reverse Polish Notation
 (M) Basic Calculator
 (M) Basic Calculator II
 (M) Different Ways to Add Parentheses



```   

```   
class Solution {
public:
    vector<string> addOperators(string num, int target) {
        
    }
};
```   

---    
## 283 Move Zeroes   
Problem url:<https://leetcode.com/problems/move-zeroes/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/move-zeroes>    
Difficulty:  Easy(143.600000)   

```   

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.


For example, given nums  = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].


Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.


Credits:Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
```   

```   
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    }
};
```   

---    
## 284 Peeking Iterator   
Problem url:<https://leetcode.com/problems/peeking-iterator/>    
Discussion url:<https://leetcode.com/discuss/questions/oj/peeking-iterator>    
Difficulty:  Medium(231.900000)   

```   
Given an Iterator class interface with methods: next() and hasNext(), design and implement a PeekingIterator that support the peek() operation -- it essentially peek() at the element that will be returned by the next call to next().

Here is an example. Assume that the iterator is initialized to the beginning of the list: [1, 2, 3].
Call next() gets you 1, the first element in the list.
Now you call peek() and it returns 2, the next element. Calling next() after that still return 2.
You call next() the final time and it returns 3, the last element. Calling hasNext() after that should return false.

Think of "looking ahead". You want to cache the next element.
Is one variable sufficient? Why or why not?
Test your design with call order of peek() before next() vs next() before peek().
For a clean implementation, check out Google's guava library source code.


Follow up: How would you extend your design to be generic and work with all types, not just integer?
Credits:Special thanks to @porker2008 for adding this problem and creating all test cases.
```   

```   
// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.
class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    
	}

	bool hasNext() const {
	    
	}
};
```   

---    
