/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        unordered_set <int> seen;
        Node* curr = head;
        if(curr== NULL){
            return head;
            
        }
        else{
            seen.insert(curr-> data);
        }
        while(curr!= NULL && curr -> next!= NULL){
            if(seen.find(curr-> next-> data) != seen.end()){
                curr -> next = curr -> next -> next;
            }else{
                seen.insert(curr-> next-> data);
                curr = curr-> next;
            }
        }
        return head;
    }
};