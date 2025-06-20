/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1, Node *root2) {
        // add code here.
        if(!root1 and !root2) return true;
        if(!root1 or !root2) return false;
        if(root1 -> data != root2-> data) return false;
        bool a = isIsomorphic(root1-> left, root2-> left) and isIsomorphic(root1-> right, root2-> right);
        bool b = isIsomorphic(root1-> left, root2-> right) and isIsomorphic(root1-> right, root2-> left);
        return a or b;
    }
};