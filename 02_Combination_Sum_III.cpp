class Solution {
   public:
    void solve(vector<vector<int>>& ans, int k, int s, int n, vector<int> v, int a[]) {
        if (k == 0 && n == 0) {
            ans.push_back(v);
            return;
        }
        if (k == 0 || n < 0 || s > 8)
            return;

        solve(ans, k, s + 1, n, v, a);
        v.push_back(a[s]);
        solve(ans, k - 1, s + 1, n - a[s], v, a);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        solve(ans, k, 0, n, {}, a);
        return ans;
    }
};