/*

Link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/

You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.
We repeatedly make k duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

Example 1:

Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing to delete.

*/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        int i = 0;

        while (i < s.length()) {
            ans.push_back(s[i]);
            if (ans.length() >= k && ans.substr(ans.length() - k) == string(k, s[i])) {
                for (int j = 0; j != k; j++) {
                    ans.pop_back();
                }
            }
            i++;
        }
        return ans; 
    }
};