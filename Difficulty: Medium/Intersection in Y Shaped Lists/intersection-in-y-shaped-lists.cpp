// Linked list Node
/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        if (head1 == NULL || head2 == NULL) {
            return NULL;
        }

        Node* t1 = head1;
        Node* t2 = head2;

        while (t1 != t2) {
            if (t1 == NULL) {
                t1 = head2;
            } else {
                t1 = t1->next;
            }

            if (t2 == NULL) {
                t2 = head1;
            } else {
                t2 = t2->next;
            }
        }

        return t1; // or return t2; they are the same at intersection or NULL
    }
};    