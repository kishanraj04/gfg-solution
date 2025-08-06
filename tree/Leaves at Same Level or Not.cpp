/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
    
    bool res = true;
    int it=0;
    bool flag=false;
    void dfs(Node *root,int level){
        if(!root) return;
        
        if(!root->left && !root->right){
            
            if(flag && it!=level){
                res=false;
                return;
            };
            it=level;
            flag=true;
        }
        
        dfs(root->left,level+1);
        dfs(root->right,level+1);
    }
    
  public:
    /*You are required to complete this method*/
    bool check(Node *root) {
        // Your code here
        dfs(root,0);
        return res;
    }
};