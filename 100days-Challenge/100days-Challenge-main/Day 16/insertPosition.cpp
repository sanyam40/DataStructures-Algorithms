/*

Link : https://leetcode.com/problems/search-insert-position/

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // solved using binary search

        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){

            mid=s+(e-s)/2;

            if(target==nums[mid]){
                ans=mid;
                break;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
        }

        if (ans == -1) {
            ans = s;
        }

        return ans;
    }
};