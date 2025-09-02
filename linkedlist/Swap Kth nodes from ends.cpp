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
    Node* swapKth(Node* head, int k) {
        // code here
        
        // find the length
        Node *tmp = head;
        int size = 0;
        while(tmp){
            size++;
            tmp = tmp->next;
        }
        
        if(k>size) return head;
        
        int f = k;
        int l = size-f;
        
        Node *first = head;
        Node *last = head;
        
        // move first
        for(int i=1;i<f;i++){
            first=first->next;
        }
        
        // move lasr
        for(int i=1;i<=l;i++){
            last= last->next;
        }
        
        swap(first->data,last->data);
        return head;
        
        
        
        
        
        
        
        
    }
};