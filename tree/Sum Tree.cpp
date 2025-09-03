/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
    int dfs(Node *root , bool &flag){
        if(!root) return 0;
        
        int left = dfs(root->left,flag);
        int right = dfs(root->right,flag);
        
        // int sum = root->data+left+right;
        // cout<<sum<<" ";
        if(root->left || root->right){
            if(root->data!=left+right){
                flag=false;
            }
        }
        return root->data+left+right;
        
        
        
    }
  public:
    bool isSumTree(Node* root) {
        // Your code here
        bool flag = true;
        dfs(root,flag);
        return flag;
    }
};