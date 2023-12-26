/*

Link : https://leetcode.com/problems/single-number/description/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result = 0;

        // XOR all elements in the array
        for (int num : nums) {
            result ^= num;
        }

        return result;

        // sort(nums.begin(),nums.end());
        // int n=nums.size();

        // // Iterate through the sorted array
        // for (int i = 0; i < n - 1; i++) {
        //     // Check if the current element is not equal to the next element
        //     if (nums[i] != nums[i + 1]) {
        //         // If true, the current element is the single number, so return it
        //         return nums[i];
        //     }
        // }
        // return nums[n - 1];    
    }
};