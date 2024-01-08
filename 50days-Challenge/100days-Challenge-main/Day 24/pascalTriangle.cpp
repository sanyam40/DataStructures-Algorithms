/*

Link : https://leetcode.com/problems/pascals-triangle/

Given an integer numRows, return the first numRows of Pascal's triangle.

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;

        if (numRows == 0) {
            return triangle;
        }

        triangle.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            std::vector<int> row;
            row.push_back(1);

            for (int j = 1; j < i; ++j) {
                row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }

            row.push_back(1);
            triangle.push_back(row);
        }

        return triangle;

        
    }
};