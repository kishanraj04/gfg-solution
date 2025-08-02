/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
    
    void dfs( Node *root){
        
        if(!root) return;
        
        swap(root->left,root->right);
        
        dfs(root->left);
        dfs(root->right);
    }
    
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        dfs(node);
    }
};