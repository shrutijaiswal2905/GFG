/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int greatest = -1;
        Node* temp = root;
        while(temp)
        {
            if(temp->data == k)
            {
                return k;
            }
            else if(temp->data < k)
            {
                greatest = temp->data;
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        return greatest;
    }
};