/* 

Link : https://leetcode.com/problems/reverse-string/

Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"] */

class Solution {
    public void reverseString(char[] s) {
        int i=s.length-1;
        int j=0;
        while(j<i){
            char t=s[j];
            s[j]=s[i];
            s[i]=t;
            j++;
            i--;
        } 
    }
}