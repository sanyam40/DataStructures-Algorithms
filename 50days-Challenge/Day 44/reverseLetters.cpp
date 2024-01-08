/*

Link : https://leetcode.com/problems/reverse-only-letters/description/

Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"

*/

class Solution {
public:
    string reverseOnlyLetters(string s) {

        // T.C : O(n)
        int low=0;
        int high=s.size()-1;

        while(low<high){
            if(isalpha(s[low]) && isalpha(s[high])){
                swap(s[low],s[high]);
                low++;high--;
            }
            else if(!isalpha(s[low])){
                low++;
            }
            else{
                high--;
            }
        }
        return s;
    }
};