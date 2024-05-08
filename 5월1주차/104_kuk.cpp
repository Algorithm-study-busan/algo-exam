#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* insert(TreeNode* root, int value)
{
    if (root == nullptr)
    {
        //printf("root가 비었어용\n");
        root = new TreeNode(value);
        return root;
    }

    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode* here = q.front();
        q.pop();

        if (here->left != nullptr)
            q.push(here->left);
        else
        {
            here->left = new TreeNode(value);
            return root;
        }

        if (here->right != nullptr)
            q.push(here->right);
        else
        {
            here->right = new TreeNode(value);
            return root;
        }
    }
}

void print(TreeNode* root)
{
    if (root == nullptr) return;

    print(root->left);
    cout << root->val << ' ';
    print(root->right);
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) 
            return 0;
        else if (root->left == nullptr && root->right == nullptr)
            return 1;

        return max(maxDepth(root->left), maxDepth(root->right));            
    }
};

int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
}