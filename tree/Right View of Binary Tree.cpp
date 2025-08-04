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

// Should return  right view of tree
class Solution {
    vector<int> res;
    void dfs(Node *root,int level){
        if(!root) return;
        if(level==res.size()) res.push_back(root->data);
        
        dfs(root->right,level+1);
        dfs(root->left,level+1);
    }
    
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        dfs(root,0);
        return res;
    }
};