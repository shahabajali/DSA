class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        for( int i =0 ; i<intervals.size();i++){
            if(intervals[i][1] < newInterval[0]){ //  inter  i last id small to newinterwal first idx then work other wise not work if cundtion  
                ans.push_back(intervals[i]);  //min value push
            }
            else if(intervals[i][0] > newInterval[1] ){ //intervls  i idx big newinterd las idx 
            // fin min an dpush other wise not work
                ans.push_back(newInterval);  
            
            for( int j =i;j<intervals.size();j++){  //push other value
                ans.push_back(intervals[j]);

            }
            return ans;
            }
            else{
               newInterval[0] = min(newInterval[0] ,intervals[i][0]) ;  // min
               newInterval[1] = max(newInterval[1] ,intervals[i][1]);  //max
            }
        }
         ans.push_back(newInterval); // then loop is complete we have value in new intervals
         return ans;
        
    }
};