/*

Link : https://leetcode.com/problems/two-sum/

Two Sum - Key Pair

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        vector<int>ans;

        // Two Pointer T.C : O(nlogn)
        // giving error bcoz after sorting indexes changed

        /* sort(nums.begin(),nums.end());
        int low=0;
        int high=n-1;

        while(low<high){
            int sum=nums[low]+nums[high];
                if(sum==target){
                    ans.push_back(low);
                    ans.push_back(high);
                    break;
                }
                else if(sum>target){
                    high--;
                }
                else{
                    low++;
                }
        }
        return ans; */

        // Brute Force TC : O(n^2)
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;       
    }
};