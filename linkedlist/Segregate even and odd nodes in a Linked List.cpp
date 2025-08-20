// User function template for C++

/*
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
    Node* divide(Node* head) {
        // code here
        Node *res = new Node(-1);
        Node *dumm = res;
        Node *tmp = head;
        // find even
        while(tmp){
            if(tmp->data%2==0){
                res->next = new Node(tmp->data);
                res=res->next;
            }
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp){
            if(tmp->data%2!=0){
                res->next = new Node(tmp->data);
                res=res->next;
            }
            tmp=tmp->next;
        }
        
        return dumm->next;
        
    }
};