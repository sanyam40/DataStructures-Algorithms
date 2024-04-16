#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// } Driver Code Ends
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

class Solution
{
public:
    void fun(Node *root, unordered_map<int, bool> visited, bool &ans)
    {
        if (root == 0)
            return;

        // visit the node
        visited[root->data] = true;
        if (root->left == 0 && root->right == 0)
        {
            int xp1 = root->data + 1;
            int xm1 = root->data - 1 == 0 ? root->data : root->data - 1;

            if (visited.find(xp1) != visited.end() && visited.find(xm1) != visited.end())
            {
                ans = true;
            }
            return;
        }
        fun(root->left, visited, ans);
        fun(root->right, visited, ans);
    }
    bool isDeadEnd(Node *root)
    {
        bool ans = false;
        unordered_map<int, bool> visited;
        fun(root, visited, ans);
        return ans;
    }
};
