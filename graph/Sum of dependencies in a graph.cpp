class Solution {
  public:
    // Function to calculate the sum of dependencies.
    int sumOfDependencies(int V, vector<vector<int>> &edges) {
        int sum = 0;
        for (const auto& edge : edges) {
            sum += 1;
        }
        return sum;
    }
};
