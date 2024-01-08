/*

Link : https://leetcode.com/problems/minimum-size-subarray-sum/description/
Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Example 1:
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        // variable sliding windows
        // 2 Pointer T.C : O(n)

        int n=nums.size();

        int sum=0;
        int left=0;
        int right=0;
        int shortest=INT_MAX;

        while(right<n){
            // add current value to sum
            sum+=nums[right];

            if(sum>=target){
                // skip all the left elements till sum<target to find small element
                while(sum>=target){
                    sum-=nums[left];
                    left++;
                }
                shortest=min(shortest,right-left+2);
            }
            right++;

        }
        if(shortest==INT_MAX)return 0;
        else return shortest;
    }
};