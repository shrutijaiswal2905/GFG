/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    // Helper function to reverse the linked list
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* current = head;
        while (current != NULL) {
            Node* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

    // Main function to compute result based on max from right
    Node* compute(Node* head) {
        // Step 1: Reverse the list
        head = reverseList(head);

        Node* prev = head;
        Node* curr = head->next;
        int maxVal = head->data;

        // Step 2: Traverse the reversed list and delete nodes
        while (curr != NULL) {
            if (curr->data >= maxVal) {
                maxVal = curr->data;
                prev = curr;
                curr = curr->next;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
        }

        // Step 3: Reverse again to restore original order
        return reverseList(head);
    }
};