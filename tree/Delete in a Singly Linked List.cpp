/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        
        // if node at first
        if(x==1){
            head=head->next;
        }
        else{
            Node *curr=head , *prev=NULL;
            int c = 1;
            while(curr){
                if(c==x){
                    prev->next=curr->next;
                    curr=curr->next;
                    break;
                }else{
                    prev=curr;
                    curr=curr->next;
                    
                }
                c++;
            }
        }
        return head;
    }
};