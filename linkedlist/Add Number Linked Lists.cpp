class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
       
       Node *prev = NULL;
       Node *curr = head1;
       Node *n = NULL;

       // Reverse head1
       while (curr) {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
       }
       head1 = prev;

       // Reverse head2
       prev = NULL;
       curr = head2;
       n = NULL;
       while (curr) {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
       }
       head2 = prev;

       Node *h1 = head1;
       Node *h2 = head2;
       int r = 0;
       int sum = 0;
       int carry = 0;
    
       Node *res = new Node(0);
       Node *ans = res;

       // Add corresponding digits
       while (h1 || h2) {
            int val1 = (h1 ? h1->data : 0);
            int val2 = (h2 ? h2->data : 0);

            sum = val1 + val2 + carry;
            r = sum % 10;
            carry = sum / 10;
        
            res->next = new Node(r);
            res = res->next;

            if (h1) h1 = h1->next;
            if (h2) h2 = h2->next;
       }
    
       // Final carry
       if (carry) {
            res->next = new Node(carry);
       }
     
       Node *rh = ans->next; 
    
       // Reverse result
       prev = NULL;
       curr = rh;
       n = NULL;
       while (curr) {
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
       }

       // Remove leading zeros from the result
       while (prev && prev->data == 0 && prev->next) {
            prev = prev->next;
       }
        
       return prev;  // final head
    }
};
