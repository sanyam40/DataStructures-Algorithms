/*

Link : https://leetcode.com/problems/maximum-average-subarray-i/description/

You are given an integer array nums consisting of n elements, and an integer k.
Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

*/

class Solution {
public:

    // Sliding Window Method
    // Ismai hum ek hi baar sum calculate karenge add then next sub array calculate karte time i wale 
    // element ko minus aur j ke aage wala element ko add
    // T.C : O(N)
    double slidingWindow(vector<int>&nums,int &k){

        int i=0;
        int j=k-1;
        int sum=0;

        for(int y=i;y<=j;++y){
            sum+=nums[y];
        }
        int maxSum=sum;
        j++;
        while(j<nums.size()){ // condition due to array size and k ki value same h toh
            sum-=nums[i++];
            sum+=nums[j++];
            maxSum=max(maxSum,sum);
        }
        double maxAvg=maxSum/(double)k;
        return maxAvg;
    }

    // Brute Force Approach 
    // T.C : O(n^2)
    // ek ek karke different sub arrays ka sum calculate karenge then max sum nikal ke avg.
    /* double bruteforce(vector<int>&nums,int&k){
        int maxSum=INT_MIN;
        int i=0;int j=k-1;
        while(j<nums.size()){
            int sum=0;
            for(int k=0;k<=j;++k){
                sum+=nums[k];
                maxSum=max(maxSum,sum);
                ++j;
                ++i;
            }              
        }
        double maxAvg=maxSum/(double)k;   
        return maxAvg;
    } */

    
    double findMaxAverage(vector<int>& nums, int k) {

        // return bruteforce(nums,k);

        return slidingWindow(nums,k);
        
    }
};