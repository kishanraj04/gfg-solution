/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    
    Node *res = NULL;
    void dfs(Node *root,Node *n1 , Node *n2){
        if(!root) return;
        
        if((n1->data<=root->data && n2->data>=root->data) || (n1->data>=root->data && n2->data<=root->data)){
            res=root;
            return;
        }
        dfs(root->left,n1,n2);
        dfs(root->right,n1,n2);
    }
    
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        dfs(root,n1,n2);
        return res;
    }
};