/*

q.958 : https://leetcode.com/problems/check-completeness-of-a-binary-tree/description/

Given the root of a binary tree, determine if it is a complete binary tree.
In a complete binary tree, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.


*/

class Solution
{
public:
    bool levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;

        if (root == NULL)
            return false;

        q.push(root);
        bool nullFound = false;

        while (!q.empty())
        {
            TreeNode *front = q.front();
            q.pop();

            if (front == NULL)
            {
                nullFound = true;
            }
            else
            {
                q.push(front->left);
                q.push(front->right);

                if (nullFound)
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isCompleteTree(TreeNode *root)
    {
        return levelOrder(root);
    }
};