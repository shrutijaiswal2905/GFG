/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
       if(!head)
       return nullptr;
       
       Node* curr=head;
       vector<int>ans;
       while(curr)
       {
           ans.push_back(curr->data);
           curr=curr->next;
       }
       sort(ans.begin(),ans.end());
       curr=head;
       int i=0;
       while(curr)
       {
           curr->data=ans[i];
           i++;
           curr=curr->next;
       }
       return head;
    }
};