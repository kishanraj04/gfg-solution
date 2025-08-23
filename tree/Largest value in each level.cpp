// User function Template for C++

class Solution {
    
    void dfs(Node *root,vector<int> &res,int level){
        if(!root) return;
        
        if(level==res.size()){
            res.push_back(root->data);
        }else{
            res[level] = max(res[level],root->data);
        }
        
        dfs(root->left,res,level+1);
        dfs(root->right,res,level+1);
    }
    
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int> res;
        dfs(root,res,0);
        return res;
    }
};