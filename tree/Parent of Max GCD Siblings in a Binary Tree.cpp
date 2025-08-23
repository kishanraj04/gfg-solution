// User function Template for C++

/*
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
    
    void dfs(Node *root,int &gcd , int &ans){
        if(!root) return;
        
        if(root->left && root->right){
            int g =  __gcd(root->left->data,root->right->data);
            
            if(g>gcd){
                gcd = g;
                ans = root->data;
            }else if(g==gcd){
                ans = max(ans,root->data);
            }
        }
        dfs(root->left,gcd,ans);
        dfs(root->right,gcd,ans);
    }
   
  public:
    int maxGCD(Node* root) {
        // code here
        int gcd = 0;
        int ans = 0;
        dfs(root,gcd,ans);
        return ans;
    }
};
