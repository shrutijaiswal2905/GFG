/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node*merge(Node*root1,Node*root2){
        if (!root1) return root2;
        if (!root2) return root1;
        
        Node*result;
        if (root1->data<=root2->data){
            result=root1;
            result->bottom=merge(root1->bottom,root2);
        }
        else{
            result=root2;
            result->bottom=merge(root1,root2->bottom);
        }
        result->next=NULL;
        return result;
    }
    Node *flatten(Node *root) {
        // code here
        if (!root || root->next==NULL) return root;
        
        root->next=flatten(root->next);
        
        root=merge(root,root->next);
        
        // root->next=NULL;
        
        return root;
    }
};