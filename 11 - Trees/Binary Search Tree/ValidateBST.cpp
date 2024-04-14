/*

Q.98 : https://leetcode.com/problems/validate-binary-search-tree/description/ 

Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

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
    bool isValidBSTHelper(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if (root == nullptr) return true;
        
        if ((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val))
            return false;
        
        return isValidBSTHelper(root->left, minNode, root) && isValidBSTHelper(root->right, root, maxNode);
    }

    bool solve(TreeNode* root, int lowerBound,int upperBound){
        if(root==NULL) return true;

        bool cond1=(root->val > lowerBound);
        bool cond2=(root->val < upperBound);

        bool leftAns=solve(root->left,lowerBound,root->val);
        bool rightAns=solve(root->right,root->val,upperBound);

        if(cond1 && cond2 && leftAns && rightAns){
            return true;
        }
        else return false;
    }

    bool isValidBST(TreeNode* root) {
        // return isValidBSTHelper(root, nullptr, nullptr);

        long long int lowerBound=-2147483657;
        long long int upperBound=2147483657;

        return solve(root,lowerBound,upperBound);
    }
};