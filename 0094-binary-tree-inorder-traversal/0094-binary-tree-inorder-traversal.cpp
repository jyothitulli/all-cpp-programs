class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> result;
        preorder(root, result);
        return result;
    }
    void preorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }

        preorder(node->left, result);
         result.push_back(node->val);
        preorder(node->right, result);
    }
};