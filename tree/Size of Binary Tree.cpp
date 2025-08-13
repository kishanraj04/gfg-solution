/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  int dfs(Node *root){
      if(!root) return 0;
      
      return 1+dfs(root->left)+dfs(root->right);
  }
  public:
    int getSize(Node* node) {
        // code here
        return dfs(node);
    }
};