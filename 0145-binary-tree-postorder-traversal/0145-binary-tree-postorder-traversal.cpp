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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        post(root,result);
        return result;
    }
    void post(TreeNode* Node,vector<int>& result){
        if(Node==nullptr){
            return;
        }
        post(Node->left,result);
        post(Node->right,result);
        result.push_back(Node->val);
    }
};