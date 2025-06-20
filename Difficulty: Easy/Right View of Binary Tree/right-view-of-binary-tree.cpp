/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // code here
        vector<int> res;
        recurssion(root,0, res);  //level=0
        return res;
        
    }
    
    void recurssion(Node *root, int level, vector<int> &res){
        if(root==NULL){
            return;
        }
        if(level==res.size()){
            res.push_back(root->data);
        }
        recurssion(root->right,level+1,res);
        recurssion(root->left,level+1,res);
    }
};