/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void dfs(Node *root,vector<int> &res){
    if(!root || (!root->left && !root->right)) return;
    
    if(root->left && !root->right){
       res.push_back(root->left->data); 
    }
    else if(!root->left && root->right){
        res.push_back(root->right->data);
    }
    
    dfs(root->left,res);
    dfs(root->right,res);
}


vector<int> noSibling(Node* node) {
    // code here
    vector<int> res;
    dfs(node,res);
    if(res.empty()){
        res.push_back(-1);
    }else{
        sort(res.begin(),res.end());
    }
    return res;
}