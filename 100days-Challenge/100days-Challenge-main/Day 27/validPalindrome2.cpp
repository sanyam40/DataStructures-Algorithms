/*
Link : https://leetcode.com/problems/valid-palindrome-ii/description/
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

Example 1:

Input: s = "aba"
Output: true
*/

class Solution {
public:
bool checkPalindrome(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                // s[i]!=s[j]
                // 1 removal allowed
                // check palindrome for remaining string after removal
                // i wale ko remove karke
                bool ans1=checkPalindrome(s,i+1,j);
                // j wala ko remove karke
                bool ans2=checkPalindrome(s,i,j-1);
                return ans1 || ans2;
            }
        }
        // in 0 removal case
        return true;     
    }
};