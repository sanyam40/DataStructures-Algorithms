/*

Link : https://leetcode.com/problems/string-compression/description/

Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

 

Example 1:

Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.empty()) {
            return 0;
        }

        int index = 0;
        char prev = chars[0];
        int count = 1;
        int start = 0;

        for (int i = 1; i < chars.size(); ++i) {
            if (chars[i] == prev) {
                count++;
            } else {
                chars[index++] = prev;
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[index++] = c;
                    }
                }
                prev = chars[i];
                count = 1;
            }
        }

        // Include the final character and its count
        chars[index++] = prev;
        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr) {
                chars[index++] = c;
            }
        }

        return index;
    }
};
