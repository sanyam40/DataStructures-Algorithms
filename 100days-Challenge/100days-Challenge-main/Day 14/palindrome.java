/*
 * Link : https://leetcode.com/problems/valid-palindrome/description/
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
 */


class Solution {
    public boolean isPalindrome(String s) {
        char[] sArray = s.toLowerCase().toCharArray();
        int start = 0;
        int end = sArray.length - 1;

        while (start < end) {
            if (!(Character.isLetter(sArray[start]) || Character.isDigit(sArray[start]))) {
                start++;
                continue;
            }

            if (!(Character.isLetter(sArray[end]) || Character.isDigit(sArray[end]))) {
                end--;
                continue;
            }

            if (sArray[start] != sArray[end]) {
                return false;
            }
            
            start++;
            end--;
        }

        return true;
    }
    }
