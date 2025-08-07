/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
    vector<int> ans;
    int kth = 0;
    void dfs(Node *root,int dist){
        if(!root) return;
        
        if(dist==kth) ans.push_back(root->data);
        
        dfs(root->left,dist+1);
        dfs(root->right,dist+1);
        
    }
    
  public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        kth=k;
        dfs(root,0);
        return ans;
    }
};