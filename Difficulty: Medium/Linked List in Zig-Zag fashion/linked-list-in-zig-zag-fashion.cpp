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
    Node* zigZag(Node* head) {
        Node* curr = head;
        int idx = 0;

        while (curr != nullptr && curr->next != nullptr) {
            if (idx % 2 == 0) {
                if (curr->data > curr->next->data) {
                    swapData(curr);
                }
            } else {
                if (curr->data < curr->next->data) {
                    swapData(curr);
                }
            }
            idx++;
            curr = curr->next;
        }

        return head;
    }

private:
    void swapData(Node* a) {
        int temp = a->data;
        a->data = a->next->data;
        a->next->data = temp;
    }
};