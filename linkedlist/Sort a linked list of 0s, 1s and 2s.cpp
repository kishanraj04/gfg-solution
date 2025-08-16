/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        vector<int> vec;
        
        Node *tmp = head;
        while(tmp){
            vec.push_back(tmp->data);
            tmp=tmp->next;
        }
        sort(vec.begin(),vec.end());
        Node *res = new Node(vec[0]);
        
        Node *dummy = res;
        for(int i=1;i<vec.size();i++){
            res->next = new Node(vec[i]);
            res = res->next;
        }
        return dummy;
    }
};