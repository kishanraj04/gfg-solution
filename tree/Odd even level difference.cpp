/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  int odd = 0;
  int even = 0;
  
  void dfs(Node *root,int level){
      if(!root) return;
      
      if(level%2!=0){
          even+=root->data;
      }else{
          odd+=root->data;
      }
      
      dfs(root->left,level+1);
      dfs(root->right,level+1);
  }
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root) {
        // Your code here
        dfs(root,1);
        return even-odd;
    }
};