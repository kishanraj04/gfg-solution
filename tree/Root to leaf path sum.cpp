/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
    int t = 0;
    bool res = false;
    void dfs(Node *root,int sum){
        if(!root) return ;
        sum=sum+root->data;
       
        if(!root->left && !root->right && sum==t) {
            res=true;
            return;
        };
         dfs(root->left,sum);
         dfs(root->right,sum);
         
         
    }
    
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        t=target;
         dfs(root,0);
         return res;
    }
};