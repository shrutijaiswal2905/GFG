/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        stack <Node *> S;
        queue <Node *> Q;
        Q.push(root);
        while(Q.empty()== false){
            root = Q.front();
            Q.pop();
            S.push(root);
            if(root-> right){
                Q.push(root-> right);
            }
            if(root-> left){
                Q.push(root-> left);
            }
        }
        while(S.empty()== false){
            root=S.top();
            cout<< root-> data << " ";
            S.pop();
        }
    }
};