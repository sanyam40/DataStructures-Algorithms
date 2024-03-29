/*

q.110 : https://leetcode.com/problems/balanced-binary-tree/description/

Given a binary tree, determine if it is 
height-balanced

*/

class Solution {
public:

    int height(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
               
        return ans;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        // curr Node
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int diff=abs(leftHeight-rightHeight);

        bool ans=(diff<=1);

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        if(ans && left && right){
            return true;
        }
        else return false;
    }
};