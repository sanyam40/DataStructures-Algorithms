/*

Q.543 : https://leetcode.com/problems/diameter-of-binary-tree/description/

Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int height(TreeNode* root){
    if(root==NULL){
            return 0;
        }

        int left=height(root->left);
        int right=height(root->right);
        int height=max(left,right)+1;
        return height;
        

   }
    int diameterOfBinaryTree(TreeNode* root) {

        if(root==NULL){
            return 0;
        }

        int option1=diameterOfBinaryTree(root->left);
        int option2=diameterOfBinaryTree(root->right);
        int option3=height(root->left)+height(root->right);
        int diameter=max(option1,max(option2,option3));
        return diameter;

        
    }
};