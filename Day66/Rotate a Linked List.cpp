/*

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
    Node* rotate(Node* head, int k) {
        if (! head || !head->next || k == 0)
            return head;
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        
        k = k % length;
        if (k == 0) return head;
        
        Node* current = head;
        for (int i = 1; i < k; i++) {
            current = current->next;
        }
        
        Node* newHead = current->next;
        current->next = NULL;
        temp->next = head;
        
        return newHead;
        
    }
}; 
