/*

q.235 : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;

        // case 1 : p nd q both comes in left subTree  of root Node
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left,p,q);
        }

        // case 2 : p nd q both comes in right subTree  of root Node
        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right,p,q);
        }

        // case 3: p in left subTree &&  q is in right subTree of root Node
        if(p->val < root->val && q->val > root->val){
            return root;
        }

        // case 4: p in right subTree &&  q is in left subTree of root Node
        if(p->val > root->val && q->val < root->val){
            return root;
        }
        return root;
    }
};