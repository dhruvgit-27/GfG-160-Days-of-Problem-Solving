

class Solution {
  public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    Node* removeLeadingZeros(Node* head) {
        while (head && head->data == 0 && head->next != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
        return head;
    }
    
    Node* addTwoLists(Node* num1, Node* num2) {
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node* dummy = new Node(0);
        Node* current = dummy;
        int carry = 0;
        
        while (num1 || num2 || carry) {
            int sum = carry;
            if (num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2) {
                sum += num2->data;
                num2 = num2->next;
            }
            carry = sum / 10;
            current->next = new Node(sum % 10);
            current = current->next;
        }
        
        Node* result = reverse(dummy->next);
        result = removeLeadingZeros(result);
        return result;
        
    }
}; 
