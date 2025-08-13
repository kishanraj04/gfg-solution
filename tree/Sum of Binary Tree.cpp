/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  int dfs(Node *root){
      if(!root) return 0;
      
      return root->data+dfs(root->left)+dfs(root->right);
  }
  public:
    int sumBT(Node* root) {
        // code here
        return dfs(root);
    }
};