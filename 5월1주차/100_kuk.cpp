#include <iostream>
#include <vector>
using namespace std;

//  Definition for a binary tree node.
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
    void preorder(TreeNode* tree, vector<int>& v)
    {
        if (tree == nullptr)
        {
            v.push_back(-1);
            return;
        }
        v.push_back(tree->val);
        preorder(tree->left, v);
        preorder(tree->right, v);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> pv, qv;
        preorder(p, pv);
        preorder(q, qv);
        cout << pv.size() << ' ' << qv.size() << '\n';
        if (pv.size() != qv.size()) return false;
        for (int i=0; i<pv.size(); ++i)
        {
            if (pv[i] != qv[i]) return false;
            cout << pv[i] << ' ' << qv[i] << '\n';
        }
        return true;
    }
};

int main()
{
    Solution* sol = new Solution();
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(-1);
    TreeNode* q = new TreeNode(1);
    q->right = new TreeNode(-1);
    sol->isSameTree(p, q);
}