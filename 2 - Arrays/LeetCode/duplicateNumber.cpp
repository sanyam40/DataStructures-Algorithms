/*

Link : https://leetcode.com/problems/find-the-duplicate-number/description/
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

*/

#include <vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Positioning Method
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];


        /* visited index approach
        // T.C : O(n)
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            // already visited
            if(nums[index]<0){
                ans= index;
                break;
            }
            nums[index]*=-1;
        }
        return ans;  */


        /* Adjacent Element Aprroach
       // T.C : O(nlogn)
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;*/

        /* 
        Two Pointer Approach
        T.C : O(n^2)
        int n=nums.size();
        int ans;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    ans=nums[j];
                }
            }
        }
        return ans;     */
    }
};