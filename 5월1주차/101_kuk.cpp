#include <iostream>
#include <vector>
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

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v, int depth)
    {
        if (root == nullptr) return;

        inorder(root->left, v, depth + 1000);
        v.push_back(root->val + depth);
        inorder(root->right, v, depth + 1000);
    }

    bool isSymmetric(TreeNode* root) {
        vector<int> p, q;
        inorder(root, p, 0);

        for (auto& e : p)
            cout << e << ' ';
        cout << '\n';

        for (int i=0; i<p.size() / 2; ++i)
        {
            if (p[i] != p[p.size() - 1 - i])
                return false;
        }
        
        return true;
    }
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

int main()
{
    Solution* sol = new Solution();
    
    TreeNode* root = nullptr;
    vector<int> inp {1,2,2,2,NULL,2};
    for (auto& e : inp)
        root = insert(root, e);

    //print(root);

    if (sol->isSymmetric(root))
        cout << "true";
    else
        cout << "false";
}