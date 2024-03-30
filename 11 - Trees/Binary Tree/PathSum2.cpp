/*

Q.113 : https://leetcode.com/problems/path-sum-ii/description/

Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.
A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

*/

class Solution {
public:
    void solve(TreeNode* root,int targetSum,vector<vector<int>> &ans,vector<int>temp,int sum){
        if(root==NULL) return;

        sum+=root->val;
        temp.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans.push_back(temp);
            }
            else return;
        }

        solve(root->left,targetSum,ans,temp,sum);
        solve(root->right,targetSum,ans,temp,sum);

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(root,targetSum,ans,temp,sum);
        return ans;
    }
};