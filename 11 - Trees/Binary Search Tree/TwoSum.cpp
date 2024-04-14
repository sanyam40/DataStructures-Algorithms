/*

q.653 Two Sum IV - IN A BST : https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.

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

    void storeInOrder(TreeNode* root,vector<int> &inOrder){
        if(root==NULL) return;

        storeInOrder(root->left,inOrder);
        inOrder.push_back(root->val);
        storeInOrder(root->right,inOrder);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> inOrder;
        storeInOrder(root,inOrder);

        // now in vector using 2 pointer
        int s=0;
        int e=inOrder.size()-1;

        while(s<e){
            int sum=inOrder[s] + inOrder[e];
            if(sum==k) return true;

            else if(sum>k){
                e--;
            }
            else if(sum<k){
                s++;
            }
        }
        return false;
    }
};