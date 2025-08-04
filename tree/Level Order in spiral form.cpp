/* A binary tree node has data, pointer to left child
   and a pointer to right child
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        // code here
        queue<Node *> q;
        vector<int> res;
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            int s = q.size();
            level++;
            vector<int> tmp;
            while(s--){
                Node *front = q.front();
                q.pop();
                tmp.push_back(front->data);
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            if(level%2!=0){
                reverse(tmp.begin(),tmp.end());
               
            } for(int v:tmp){
                    res.push_back(v);
                }
        }
        return res;
    }
};