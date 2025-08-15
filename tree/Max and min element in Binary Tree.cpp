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
    
    int manxele(Node *root,int &maxe){
        if(!root) return 0;
        if(root->data>maxe) maxe=root->data;
        
        manxele(root->left,maxe);
        manxele(root->right,maxe);
        
        return maxe;
    }
    
    int minele(Node *root,int &maxe){
        if(!root) return 0;
        if(root->data<maxe) maxe=root->data;
        
        minele(root->left,maxe);
        minele(root->right,maxe);
        
        return maxe;
    }
  public:
    int findMax(Node *root) {
        // code here
        int max = INT_MIN;
        return manxele(root,max);
    }

    int findMin(Node *root) {
        int min = INT_MAX;
        return minele(root,min);
        // code here
    }
};