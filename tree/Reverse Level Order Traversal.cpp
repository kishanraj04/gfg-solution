/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        queue<Node*> q;
        q.push(root);
        vector<int> res;
        
        while(!q.empty()){
            int s = q.size();
            vector<int> tmp;
            while(s--){
                Node *front = q.front();
                q.pop();
                tmp.push_back(front->data);
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            reverse(tmp.begin(),tmp.end());
            
            for(int val:tmp){
                res.push_back(val);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};