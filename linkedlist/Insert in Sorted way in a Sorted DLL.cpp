/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
         Node* tmp = new Node();
        tmp->data = x;
        tmp->next = nullptr;
        tmp->prev = nullptr;
        // if first
        
        
        if(head->data>=x){
            tmp->next = head;
            head->prev = tmp;
            head = tmp;
            return head;
        }
        
        // for mid
        Node *jump = head;
        while(jump){
            
            
            if(jump->data>=x){
               
                
                Node *p=jump->prev;
                
                p->next = tmp;
                tmp->prev=p;
                
                tmp->next = jump;
                jump->prev = tmp;
                
                break;
            }
            
            if(!jump->next && jump->data<x){
               
                
                 jump->next = tmp;
                 tmp->prev = jump;
                 break;
            }
            jump=jump->next;
        }
        
        return head;
        
        
    }
};