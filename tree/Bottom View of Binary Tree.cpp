/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> m;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto p = q.front();
                q.pop();
                
            
                Node *front = p.first;
                int level = p.second;
                
                m[level] = front->data;
                
                if(front->left) q.push({front->left,level-1});
                if(front->right) q.push({front->right,level+1});
            }
        }
        
        vector<int> res;
        for(auto [key,val] : m){
            res.push_back(val);
        }
        return res;
    }
};