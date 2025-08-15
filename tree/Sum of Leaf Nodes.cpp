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
    
 int dfs(Node *root,int &res){
     if(!root) return 0;
     
     dfs(root->left,res);
     dfs(root->right,res);
     
     if(!root->left && !root->right){
         return res+=root->data;
     }
     return res;
 }    
    
  public:
    int leafSum(Node* root) {
        // code here
        int res = 0;
        return dfs(root,res);
    }
};