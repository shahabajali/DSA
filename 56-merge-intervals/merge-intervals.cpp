class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(  int i =1 ;i<intervals.size();i++){

            // check overflow
            if( intervals[i][0] <= ans.back()[1]){  //  current idx startin value small ans idx end value 
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);  // then find max in current idx end value 
            }else{
                ans.push_back(intervals[i]);  // push new idx value
            }
        }
       return ans; 
    }
}; 