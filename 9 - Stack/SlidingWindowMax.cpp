/*

Q.239 https://leetcode.com/problems/sliding-window-maximum/description/

You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
Return the max sliding window.
Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]

*/

#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        // first window process
        for(int i = 0; i < k; i++) {
            // chote element remove kardo
            while(!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back();
            }
            // now insert
            dq.push_back(i);
        }

        // remaining windows -> removal & addition
        for(int i = k; i < nums.size(); i++) {
            ans.push_back(nums[dq.front()]);

            // removal -> out of range
            if(!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }

            // chote elements pop kardo
            int element = nums[i];
            while(!dq.empty() && element > nums[dq.back()]) {
                dq.pop_back();
            }

            // addition
            dq.push_back(i);
        }

        // last window ka ans
        ans.push_back(nums[dq.front()]);
        
        return ans; // return the final answer
    }
};
