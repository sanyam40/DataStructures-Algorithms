/*

Link : https://leetcode.com/problems/missing-number/

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<n;j++){
        //         if(nums[i]==j){
        //             break;
        //         }
        //         else{
        //             ans=j;
        //         }
        //     }
        // }
        // return ans;
        int actual_sum=0;

        for(int i=0;i<n;i++){
            actual_sum+=nums[i];
        }

        int total_sum=((n)*(n+1))/2;
        int ans=total_sum-actual_sum;
        return ans;
    }
};