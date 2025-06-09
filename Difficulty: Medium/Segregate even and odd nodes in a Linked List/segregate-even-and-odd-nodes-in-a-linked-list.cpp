// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        Node*even= new Node(0);
        Node*odd= new Node(0);
        Node*evenpointer=even;
        Node*oddpointer=odd;
        while(head!= NULL){
            if(head->data%2 == 0){
                evenpointer -> next = head;
                evenpointer = evenpointer -> next;
                head= head-> next;
            }
            else{
                oddpointer-> next= head;
                oddpointer= oddpointer->next;
                head= head-> next;
            }
            evenpointer-> next = odd->next;
            oddpointer->next=NULL;
            
        } return even-> next;
        
    }  
};