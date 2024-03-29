/*

q.112 : https://leetcode.com/problems/path-sum/description/

Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.

*/

class Solution {
public:
    bool solve(TreeNode* root,int targetSum,int sum){
        if(root==NULL) return false;

        sum+=root->val;
        if(root->left == NULL && root->right == NULL){
            // on a leaf nODE
            if(sum==targetSum) return true;
            else return false;
        }

        bool left=solve(root->left,targetSum,sum);
        bool right=solve(root->right,targetSum,sum);

        return left || right;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {

        int sum=0;
        bool ans=solve(root,targetSum,sum);
        return ans;

        
    }
};