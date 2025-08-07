/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node *slow=head,*fast=head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                break;
            }
        }
        
        if(slow!=fast) return;
        
        // Step 2: Find start of the loop
        slow = head;
        Node *prev=NULL;
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
           
        }
        
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=nullptr;
        
        
        
        
    }
};