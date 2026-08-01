class Solution {
public:
    void getHelper(vector<int>& candidates, int target, int idx,
                   vector<vector<int>>& ans, vector<int>& combi) {

        if (target == 0) {
            ans.push_back(combi);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            // same level pe duplicate skip karo (sirf pehle wale ko allow karo)
            if (i > idx && candidates[i] == candidates[i - 1]) continue;

            // agar current element hi target se bada hai, aage sab bhi bade honge (sorted hai)
            if (candidates[i] > target) break;

            combi.push_back(candidates[i]);
            getHelper(candidates, target - candidates[i], i + 1, ans, combi);
            combi.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> combi;
        getHelper(candidates, target, 0, ans, combi);
        return ans;
    }
};