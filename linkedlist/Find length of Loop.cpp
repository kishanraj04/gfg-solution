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
    int lengthOfLoop(Node *head) {
        // Code here
        if(!head || !head->next) return 0;
        Node *prev = head , *n = head;
        int loop =1;
        while(n && n->next){
            prev = prev->next;
            n = n->next->next;
            if(prev==n) break;
        }
        if(prev!=n) return 0;
        
            Node *tmp = prev->next;
            while(tmp!=n){
                tmp=tmp->next;
                loop++;
            }
            return loop;
        
        
    }
};