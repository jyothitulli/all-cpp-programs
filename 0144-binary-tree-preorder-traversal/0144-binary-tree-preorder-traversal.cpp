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
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> result;
        // Call the helper function to perform the traversal
        preorder(root, result);
        return result;
    }
    void preorder(TreeNode* node, vector<int>& result) {
        // Base case: if the node is null, return
        if (node == nullptr) {
            return;
        }

        // 1. Visit the root
        result.push_back(node->val);

        // 2. Traverse the left subtree
        preorder(node->left, result);

        // 3. Traverse the right subtree
        preorder(node->right, result);
    }
};