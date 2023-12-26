/*

Link : https://leetcode.com/problems/custom-sort-string/description/

You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.
Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
Return any permutation of s that satisfies this property.

Example 1:

Input: order = "cba", s = "abcd"
Output: "cbad"
Explanation: 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

*/

class Solution {
public:
    static string str;
    static bool compare(char ch1,char ch2){
        // this will return true,if position of ch1 in str is less than
        // the position of characters in str.
        // when true is retured then ch1 will be placed before ch2 in output
        return (str.find(ch1)<str.find(ch2));
    }
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
string Solution::str;