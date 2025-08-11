/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
    
    int dfs(Node * &root){
        if(!root) return 0;
        
        
        int lv = dfs(root->left);
        int rv = dfs(root->right);
        
        int r = lv+rv+root->data;
        root->data = lv+rv;
        return r;
    }
    
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node) {
        // Your code here
        dfs(node);
        // return node;
    }
};