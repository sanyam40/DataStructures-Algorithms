/*
Link : https://leetcode.com/problems/palindromic-substrings/description/
Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

*/

class Solution {
public:
// har element ko ek barr center banana padega
    // In odd case i aur j dono pointer same element par honge if there are same then 
    // count++ hoga and i left ki side move hoga and j right ki side and agar equal nhi hota toh bhar aajayega
    // In even case i and j=i+1 hoga and same approach use hogi odd case wali 
    // last mai dono add karke ans return karna h
    int expand(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {

        int totalCount=0;

        for(int center=0;center<s.length();center++){
            // ODD
            int oddans=expand(s,center,center);
            // EVEN
            int evenans=expand(s,center,center+1);
            totalCount=totalCount+oddans+evenans;
        }
        return totalCount;
    }
};