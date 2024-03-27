/*

Q.104 : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        int height=max(left,right)+1;
        return height;
        
    }
};