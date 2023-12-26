/*

Link : https://leetcode.com/problems/sqrtx/description/
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

*/

class Solution {
public:
    int mySqrt(int x) {
        // Using concept of Space search nd storing ans (Binary search)
        int s=0;
        int e=x;
        int ans=-1;
        long long int mid;

        while(s<=e){
            mid=s+(e-s)/2;
            if(mid*mid>x){
                // move to left part
                e=mid-1;
            }
            else if(mid*mid<x){
                ans=mid;
                // move to right part
                s=mid+1;
            }
            else if(mid*mid==x){
                return mid;
            }
        }
        return ans;
    }
};