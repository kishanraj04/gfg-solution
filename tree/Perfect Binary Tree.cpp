/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
    
    bool dfs(Node *root,int &pl , int cl){
        if(!root) return true;
        
        if(!root->left && !root->right && pl==-1){
            pl = cl;
        }
        else if(!root->left && !root->right && pl!=cl){
            return false;
        }
       if((!root->left && root->right) || (!root->right && root->left))
        {
            return false;
        }
        
        return dfs(root->left,pl,cl+1) && 
        dfs(root->right,pl,cl+1);
    }
  public:
    bool isPerfect(Node *root) {
        // code here
        int pl =-1;
        return dfs(root,pl,0);
    }
};