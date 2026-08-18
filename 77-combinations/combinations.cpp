class Solution {
public:
    void helper(int n, int k,vector<vector<int>> &ans,vector<int> &result, int i){
        if(result.size() == k){
            ans.push_back(result);
            return;
        }
       for(int j = i;j<=n;j++){
        result.push_back(j);
        helper(n,k,ans,result,j+1);
        result.pop_back();
       }

    }
    vector<vector<int>> combine(int n, int k) {
        // base case 
      vector<vector<int>>ans;
      vector<int>result;
      helper(n,k,ans,result,1);
      return ans; 
        
    }
};