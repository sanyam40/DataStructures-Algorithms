/*

q.199 : https://leetcode.com/problems/binary-tree-right-side-view/description/

*/

class Solution {
public: 
    void solve(TreeNode* root,int level,vector<int>&n){
        if(root==NULL) return;

        if(level==n.size()){
            n.push_back(root->val); // push data
        }

        solve(root->right,level+1,n);
        solve(root->left,level+1,n);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> n;
        solve(root,0,n);
        return n;
    }
};