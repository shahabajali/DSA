class Solution {
public:
    void helper(int n, int k,vector<vector<int>> &ans,vector<int> &result, int i){
        if(result.size() == k){ // check size 2number to
            ans.push_back(result);     
            return;  //  not execute  helper noe pop_back result
        }
       for(int j = i;j<=n;j++){
        result.push_back(j); // first 1 2       
        helper(n,k,ans,result,j+1); // 1 2     // number 1
        result.pop_back();// pop_back number3
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