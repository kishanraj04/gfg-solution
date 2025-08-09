/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    
    vector<int> tv;
    void dfs(Node *root){
        if(!root) return;
        
        tv.push_back(root->data);
        dfs(root->left);
        dfs(root->right);
    }
    
    Node *bst(vector<int> &val,int s , int e){
        
        if(s>e) return nullptr;
        
        int mid = s+(e-s)/2;
        
        Node *tmp = new Node(val[mid]);
        
        tmp->left = bst(val,s,mid-1);
        tmp->right = bst(val,mid+1,e);
        
        return tmp;
    }
    
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST(Node *root) {
        // Your code goes here
        dfs(root);
        
        sort(tv.begin(),tv.end());
        
        
        return bst(tv,0,tv.size()-1);
        
        
    }
};