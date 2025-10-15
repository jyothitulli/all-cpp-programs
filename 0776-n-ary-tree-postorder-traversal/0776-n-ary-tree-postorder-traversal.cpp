/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }

        std::stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node* current = s.top();
            s.pop();
            result.push_back(current->val);
            for (Node* child : current->children) {
                s.push(child);
            }
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};