/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
       Node*curr=head,*prev=NULL;
       unordered_set<int> v;
       while(curr){
           if(v.count(curr->data)<=0){
               v.insert(curr->data);
               prev=curr;
               curr=curr->next;
               
           }else{
               prev->next = curr->next;
               curr=curr->next;
           }
       }
       return head;
    }
};