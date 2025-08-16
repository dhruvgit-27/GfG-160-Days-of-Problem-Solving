/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        if (head == NULL || k == 1) return head;
        
        Node* dummy = new Node (0);
        dummy->next = head;
        
        Node* prevGroupEnd = dummy;
        Node* curr = head;
        
        while (curr) {
            Node* check = curr;
            int count = 0;
            while (check && count < k) {
                check = check->next;
                count++;
            }
            if (count == k) {
                Node* prev = nullptr;
                Node* temp = curr;
                for (int i = 0; i < k; ++i) {
                    Node* next = temp->next;
                    temp->next = prev;
                    prev = temp;
                    temp = next;
                }
                
                prevGroupEnd->next = prev;
                prevGroupEnd = curr;
                curr->next = temp;
                curr = temp;
            } else {
                Node* prev = nullptr;
                Node* temp = curr;
                while (temp) {
                    Node* next = temp->next;
                    temp->next = prev;
                    prev = temp;
                    temp = next;
                }
                prevGroupEnd->next = prev;
                break;
            }
        }
        return dummy->next;
        
    }
}; 
