/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  int c = 0;
  void dfs(Node * &root){
      if(!root) return;
      if(root->left || root->right) c++;
      dfs(root->left);
      dfs(root->right);
  }
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        dfs(root);
        return c;
    }
};