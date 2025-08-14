/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        
        int len = 0;
        Node *tmp = head;
        while(tmp){
            len++;
            tmp = tmp->next;
        }
        
        k=k%len;
       if(k==0){
            return head;
        }
        
        Node *p1 = head;
        for(int i=1;i<k;i++){
            p1=p1->next;
        }
        
        
        Node *last = p1->next;
        Node *res = last;
        p1->next=NULL;
        
        while(last->next){
            last=last->next;
        }
        
        last->next = head;
        
        return res;
        
        
        
    }
};