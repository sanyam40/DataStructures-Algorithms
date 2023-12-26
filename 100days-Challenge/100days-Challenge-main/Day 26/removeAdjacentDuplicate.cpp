/*

Link :  https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

*/

class Solution {
public:
    string removeDuplicates(string s) {

        int i=0;
        string ans="";

        while(i<s.length()){
            // ans string ka rightmost character and string s ka current character
            if(ans.length() >0 && ans[ans.length()-1]==s[i]){
                // pop from ans
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};