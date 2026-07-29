class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n =  nums.size();
      priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(  int i=0;i<k;i++){   
              pq.push(make_pair(nums[i], i));   //  first till k index itreat max 
        }
      ans.push_back(pq.top().first);//  max value push from max heap top
      
        for(  int i = k ; i<n; i++){
                 pq.push(make_pair(nums[i], i));  //  other value push in heap
           
            while( !pq.empty() && pq.top().second <=( i-k)){     // 3-3 =0  0 index value remove 
                pq.pop(); //  outer window value remove  window is k size
            }
             ans.push_back(pq.top().first);

            
            
        }
       return ans; 
    }
};