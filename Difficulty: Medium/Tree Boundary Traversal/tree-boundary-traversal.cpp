/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
public:
    void LeftBoundary(Node* root, vector<int> &ans) {
        if (!root || (!root->left && !root->right)) return;
        ans.push_back(root->data);
        if (root->left) LeftBoundary(root->left, ans);
        else LeftBoundary(root->right, ans);
    }

    void Leaves(Node* root, vector<int> &ans) {
        if (!root) return;
        if (!root->left && !root->right) {
            ans.push_back(root->data);
            return;
        }
        Leaves(root->left, ans);
        Leaves(root->right, ans);
    }

    void RightBoundary(Node* root, vector<int> &ans) {
        if (!root || (!root->left && !root->right)) return;
        if (root->right) RightBoundary(root->right, ans);
        else RightBoundary(root->left, ans);
        ans.push_back(root->data); // Push after recursion (bottom-up)
    }

    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if (!root) return ans;

        ans.push_back(root->data); // Root
        LeftBoundary(root->left, ans); // Left boundary (top-down, exclude leaves)
        Leaves(root->left, ans); // Leaves of left subtree
        Leaves(root->right, ans); // Leaves of right subtree
        RightBoundary(root->right, ans); // Right boundary (bottom-up, exclude leaves and root)
        return ans;
    }
};