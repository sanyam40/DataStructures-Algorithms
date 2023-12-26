/*

Link : https://leetcode.com/problems/house-robber/description/

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

*/

class Solution {
public:

    int ans(vector<int>&nums , int i){
        if(i>=nums.size()) return 0;

        int robAmt=nums[i] + ans(nums,i+2);
        int robAmt2=0+ans(nums,i+1);

        return max(robAmt,robAmt2);
    }
    int rob(vector<int>& nums) {

        // return ans(nums,0); 

        // DP SOLn

        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        // Create an array to store the maximum amount of money robbed up to each house
        vector<int> dp(n, 0);

        // Base cases
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        // Iterate through the remaining houses and update the dp array
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n - 1];
    }
};