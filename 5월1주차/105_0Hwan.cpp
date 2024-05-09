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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* result = new TreeNode(preorder[0]);
        int pos=0;
        for (int i = 0; i < inorder.size(); i++) {
            if (preorder[0] == inorder[i]) {
                pos = i;
                break;
            }
        }

        if (pos > 0) {
            vector<int> pred1(preorder.begin() + 1, preorder.begin() + pos + 1);
            vector<int> ind1(inorder.begin(), inorder.begin() + pos);
            result->left = buildTree(pred1, ind1);
        }
        if (pos < inorder.size()-1) {
            vector<int> pred2(preorder.begin() + pos + 1, preorder.end());
            vector<int> ind2(inorder.begin() + pos + 1, inorder.end());
            result->right = buildTree(pred2, ind2);
        }
        return result;
    }
};