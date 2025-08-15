/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  
  void dfs(Node *root,int &res){
      if(!root) return;
      
      if(!root->left && !root->right) res++;
      
      dfs(root->left,res);
      dfs(root->right,res);
  }
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int res = 0;
        dfs(root,res);
        return res;
    }
};