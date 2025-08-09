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
    bool isPalindrome(Node *head) {
        //  code here
        
        // find mid
        Node *slow=head;
        Node *fast=head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
         Node* prev = nullptr;
        Node* curr = slow;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        Node *h=head;
        Node *c=prev;
        
        while(c){
            if(h->data!=c->data) return false;
            h=h->next;
            c=c->next;
        }
        
        return true;
        
        
        
    }
};