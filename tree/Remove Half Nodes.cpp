/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified tree after removing all the half nodes.
class Solution {
    
    Node* dfs(Node * root){
        if(!root) return nullptr;
        
        root->left = dfs(root->left);
        root->right = dfs(root->right);
        
         if (root->left && !root->right) return root->left;
        // Only right child
        if (!root->left && root->right) return root->right;
      
         return root;
    }
    
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
       return  dfs(root);
        
        
        
        
        
        
    }
};