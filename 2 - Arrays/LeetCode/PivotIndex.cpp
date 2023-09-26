/*

724.Find pivot index 
Link : https://leetcode.com/problems/find-pivot-index/description/

Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
*/

class Solution {
public:

    // Method using prefix sums to optimize pivot index search
    int prefixSumApproach(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n + 1, 0);
        vector<int> rightSum(n + 1, 0);

        // Calculate the cumulative sum of elements to the left of each index
        for (int i = 1; i <= n; ++i) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
        }

        // Calculate the cumulative sum of elements to the right of each index
        for (int i = n - 1; i >= 0; --i) {
            rightSum[i] = rightSum[i + 1] + nums[i];
        }

        // Iterate through the array to find the pivot index
        for (int i = 0; i < n; ++i) {
            if (leftSum[i] == rightSum[i + 1]) {
                return i;
            }
        }

        // If no pivot index is found, return -1
        return -1;
    }

    // Brute-force method (commented out)
    // This method has a time complexity of O(n^2)
    /*
    int bruteforce(vector<int>& nums){
        for(int i=1;i<nums.size();++i){
            int lsum=0;
            int rsum=0;

            // Find the sum of elements to the left of the current index
            for(int j=0;j<i;++j){
                lsum+=nums[j];
            }

            // Find the sum of elements to the right of the current index
            for(int j=i+1;j<nums.size();++j){
                rsum+=nums[j];
            }

            // Check if the left and right sums are equal
            if(lsum==rsum)return i;

            }
            // If no pivot index is found, return -1
            return -1;
        } 
    */

    // Method to find the pivot index using the prefix sum approach
    int pivotIndex(vector<int>& nums) {
        // Uncomment the following line to use the brute-force method
        // return bruteforce(nums);

        // Use the optimized prefix sum approach to find the pivot index
        return prefixSumApproach(nums);   
    }
};
