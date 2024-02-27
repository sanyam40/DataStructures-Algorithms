/*

Link : https://leetcode.com/problems/add-binary/description/

Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"

*/

class Solution {
public:
    string addBinary(string a, string b) {

        string result;
        int carry = 0;

        int maxLength = std::max(a.size(), b.size());
        a = std::string(maxLength - a.size(), '0') + a;
        b = std::string(maxLength - b.size(), '0') + b;

        // Perform binary addition
        for (int i = maxLength - 1; i >= 0; --i) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            result.insert(result.begin(), '0' + (sum % 2));
            carry = sum / 2;
        }

        // If there's a carry left, add it to the result
        if (carry > 0) {
            result.insert(result.begin(), '0' + carry);
        }

        return result;        
    }
};