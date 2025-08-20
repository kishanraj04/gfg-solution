/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:

    // Return the level (0-indexed) with maximum number of nodes.
    int maxNodeLevel(Node *root) {
        // Add your code here
        
        queue<Node*> q;
        q.push(root);
        int ms = INT_MIN;
        int ml = 0;
        int res = 0;
        while(!q.empty()){
            int s = q.size();
            vector<int> tmp;
            ml++;
            while(s--){
                Node *front = q.front();
                q.pop();
                tmp.push_back(front->data);
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            int si = tmp.size();
            if(si>ms){
                res=ml;
                ms=si;
            }
            
        }
        
        return res-1;
        
    }
};