class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>res;
        int  n  =  nums.size();
        // first k element chek
        for( int i =0 ;i<k;i++){
            while(dq.size() >0  && nums[dq.back()] <=  nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // second slid window and store max value in res
        for( int i  =k ; i<n ;i++){
            res.push_back(nums[dq.front()]);
            
            //  remove element if in not current window
            while(dq.size() > 0 && dq.front() <= i-k){
                dq.pop_front();  //  remove in not current window
            }
           while(dq.size() >0  && nums[dq.back()] <=  nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
         res.push_back(nums[dq.front()]);
         return res;
    }
   
};