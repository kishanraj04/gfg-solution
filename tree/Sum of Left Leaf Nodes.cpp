class Solution {
    int sum = 0;

    void dfs(Node* root, Node* parent) {
        if (!root) return;

        dfs(root->left, root);
        dfs(root->right, root);

        // Ensure parent is not null before checking
        if ((!root->left && !root->right) && parent && parent->left == root) {
            sum += root->data;
        }
    }

public:
    int leftLeavesSum(Node* root) {
        sum = 0; // reset for safety across test cases
        dfs(root, nullptr);
        return sum;
    }
}; // ← Missing semicolon here
