/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node *newNode = new Node(data);
        
        // first
        if(data<=head->data){
            newNode->next = head;
            
            Node *root = head;
            while(root->next!=head){
                root=root->next;
            }
            root->next = newNode;
            return newNode;
        }
        
       else {
    Node *prev = NULL;
    Node *curr = head;

    // Normal case
    while (curr->next != head && curr->next->data < data) {
        curr = curr->next;
    }

    // Insert here
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

        return head;
        
        
    }
};