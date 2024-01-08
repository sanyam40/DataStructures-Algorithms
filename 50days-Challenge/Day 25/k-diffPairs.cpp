/*

Link : https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.

*/

class Solution {
public:

// TC : O(nlogn)
    int binary(vector<int>&nums,int start,int x){
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        set<pair<int,int>>ans;

        for(int i=0;i<nums.size();i++){
            if(binary(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();

       /* sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;

        int i=0;
        int j=1;
        
        while(j<nums.size()){
            int diff=nums[j]-nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                ++i,++j; 
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }
            if(i==j) j++;
        }
        return ans.size();*/
    }
};