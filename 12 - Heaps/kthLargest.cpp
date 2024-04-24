
/*

q.215 : https://leetcode.com/problems/kth-largest-element-in-an-array/description/

Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Can you solve it without sorting?

*/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int size=nums.size();

        for(int i=0;i<k;i++){
        pq.push(nums[i]);
    }

    for(int i=k;i<size;i++){
        if(nums[i]>pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }
    }

    return pq.top();
    }
};