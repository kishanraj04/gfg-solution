/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> res;
        while(!q.empty()){
            int s = q.size();
            vector<int> tmp;
            while(s--){
                Node *front = q.front();
                tmp.push_back(front->data);
                q.pop();
                
               if(front->left) q.push(front->left);
               if(front->right) q.push(front->right);
            }
            res.push_back(tmp);
            
        }
        return res;
    }
};