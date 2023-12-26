/*

Link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/?envType=daily-question&envId=2023-12-02

You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words.

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        unordered_map<char, int> charCount;
        // Count the characters in chars
        for (char c : chars) {
        charCount[c]++;
        }
        
        int result = 0;
        // Iterate through each word

        for (const string& word : words) {
        unordered_map<char, int> wordCount;

        // Count the characters in the current word
        for (char c : word) {
            wordCount[c]++;
        }

        bool valid = true;

        // Check if the word can be formed using characters from chars
        for (const auto& entry : wordCount) {
            if (charCount[entry.first] < entry.second) {
                valid = false;
                break;
            }
        }

        // If the word is valid, add its length to the result
        if (valid) {
            result += word.length();
        }
    }

    return result;    
    }
};