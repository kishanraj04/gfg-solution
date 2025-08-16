/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *dummy = new Node(-1);
        Node *res = dummy;
        
        while(head1 && head2){
            if(head1->data<head2->data){
                dummy->next = new Node(head1->data);
                head1=head1->next;
            }else{
                dummy->next = new Node(head2->data);
                head2=head2->next;
            }
            
            dummy = dummy->next;
        }
        
        if(head1){
            dummy->next = head1;
        }else{
            dummy->next = head2;
        }
        
        return res->next;
    }
};