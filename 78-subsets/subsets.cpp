class Solution {
public:
     void getAllsubset(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>&subset ){
        if(i ==  nums.size()){
            subset.push_back({ans});
            return;
        }
        // include
        ans.push_back(nums[i]);
        getAllsubset(nums,ans,i+1,subset);
        //exclude
        ans.pop_back();
        getAllsubset(nums,ans,i+1,subset);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>subset;
           getAllsubset(nums,ans,0,subset);
           return subset;
    }
};