/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
    
    int dfs(Node *root){
        if(!root) return 0;
        
       int lh =  dfs(root->left);
        int rh = dfs(root->right);
        
        return 1+max(lh,rh);
    }
    
  public:
    int height(Node* node) {
        // code here
        return dfs(node)-1;
    }
};