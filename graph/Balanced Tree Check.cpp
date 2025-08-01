/* A binary tree node structure

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
    
    bool flag = true;
    
    int dfs(Node *root){
        if(!root) return 0;
        
        int lh = dfs(root->left);
        int rh = dfs(root->right);
        if(abs(lh-rh)>1){
            flag = false;
        }
        return 1+max(lh,rh);
    }
    
  public:
    bool isBalanced(Node* root) {
        // Code here
        dfs(root);
        return flag;
    }
};