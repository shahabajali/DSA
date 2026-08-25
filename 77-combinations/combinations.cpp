class Solution {
public:
    void helper(int n, int k, int start, vector<vector<int>>& result, vector<int>& tem) {
        if (tem.size() == k) {
            result.push_back(tem);
            return;
        }
        for (int i = start; i <= n; i++) {
            tem.push_back(i);
            helper(n, k, i + 1, result, tem);
            tem.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;   // ✅ Proper initialization
        vector<int> tem;              // ✅ Proper initialization
        helper(n, k, 1, result, tem);
        return result;
    }
};
