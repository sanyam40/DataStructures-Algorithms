/*

Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
Since the result may be very large, so you need to return a string instead of an integer.

Example 1:

Input: nums = [10,2]
Output: "210"

*/

class Solution {
public:
    string largestNumber(vector<int>& nums) {

        int n=nums.size();

        // T.C : O(n^2) // Bubble Sort
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                string str1 = to_string(nums[i]);
                string str2 = to_string(nums[j]);

                if (str1 + str2 < str2 + str1) {
                    swap(nums[i], nums[j]);
                }
            }
        }

        string result;
        for (int num : nums) {
            result += to_string(num);
        }

        if (result[0] == '0') {
            return "0";
        }

        return result;
    }
};