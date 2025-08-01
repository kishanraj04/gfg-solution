/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node *prev=head;
        Node *curr=head;
        
        while(curr){
            while(curr && prev->data==curr->data){
                curr=curr->next;
            }
            prev->next=curr;
            prev=curr;
        }
        return head;
    }
};