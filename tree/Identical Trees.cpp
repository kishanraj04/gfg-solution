/* A binary tree node


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
    
 bool flag = true;
 void dfs(Node *root1, Node *root2){
     if(!root1 && !root2) return;
     else if((!root1 && root2) || (root1 && !root2)){
         flag = false;
         return;
     }else if(root1->data!=root2->data){
         flag=false;
         return;
     }
     dfs(root1->left,root2->left);
     dfs(root1->right,root2->right);
 }
    
  public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {
        // Your Code here
        dfs(r1,r2);
        return flag;
    }
};