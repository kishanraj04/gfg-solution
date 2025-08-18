class Solution {
    
    int dfs(Node *root , int level , int &md){
        if(!root) return 0;
        if(level > md){
            md = level;          }
        dfs(root->left, level+1, md);
        dfs(root->right, level+1, md);
        return 0;
    }

  public:
    int maxDepth(Node *root) {
        int md = 0;
        dfs(root, 1, md);
        return md;
    }
};
