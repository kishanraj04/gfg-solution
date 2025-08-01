/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *n = new Node(x);
        
        if(!head) return n;
        if(!head->next){
             head->next = n;
             return head;
        };
        
        Node *tmp = head;
        
        while(tmp->next){
            tmp = tmp->next;
        }
        
        tmp->next = n;
        return head;
    }
};