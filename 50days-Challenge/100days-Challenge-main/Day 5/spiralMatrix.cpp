/* 

Link : https://leetcode.com/problems/spiral-matrix/

Given an m x n matrix, return all elements of the matrix in spiral order.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        // T.C : O(m*n)

        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> ans(0);

        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (ans.size() < m * n) {
            // Traverse from left to right along the top row
            for (int i = left; i <= right && ans.size() < m * n; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // Traverse from top to bottom along the rightmost column
            for (int i = top; i <= bottom && ans.size() < m * n; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Traverse from right to left along the bottom row
            for (int i = right; i >= left && ans.size() < m * n; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;

            // Traverse from bottom to top along the leftmost column
            for (int i = bottom; i >= top && ans.size() < m * n; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        // while(ans.size()<m*n){

        //    // 1 row (0,0) se (0,m)
        //    for(int i=0;i<m;i++){
        //        ans.push_back(matrix[0][i]);
        //     }
        //     // ab (1,2) and (2,2)
        //     for(int i=1;i<n;i++){
        //         ans.push_back(matrix[i][2]);
        //     }

        //     // ab (2,1) and (2,0)
        //     for(int i=1;i<0;i--){
        //         ans.push_back(matrix[2][i]);
        //     }

        //     // ab (1,0) and (1,1)
        //     for(int i=0;i<1;i++){
        //         ans.push_back(matrix[1][i]);
        //     }

        // }

        return ans;        
    }
};