/* A binary tree node structure

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
    bool isBalanced(Node* root) {
        // Code here
        return maxDepth(root) != -1;
        
        
    }
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        
        int lh= maxDepth(root-> left);
        if(lh== -1) return -1;
        int rh= maxDepth(root -> right);
        if(rh== -1) return -1;

        if(abs(lh-rh) > 1) return -1;
        return 1+ max(lh,rh);
    }
};