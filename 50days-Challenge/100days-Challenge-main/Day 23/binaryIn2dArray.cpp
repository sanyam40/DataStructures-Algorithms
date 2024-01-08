/*

Link :  https://leetcode.com/problems/search-a-2d-matrix/

You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // Binary Search in 2D Array 
        // T.C : O(log(m*n))
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;

        int s=0;
        int e=n-1;
        int mid;

        while(s<=e){
            mid=s+(e-s)/2;

            // This is formula for 1D Array to 2D Array
            int rowIndex=mid/col;
            int colIndex=mid%col;
            int currNumber=matrix[rowIndex][colIndex];

            if(currNumber==target){
                return true;
            }
            else if(target>currNumber){
                //right
                s=mid+1;
            }
            else{
                //left
                e=mid-1;
            }
        }
        return false;   
    }
};