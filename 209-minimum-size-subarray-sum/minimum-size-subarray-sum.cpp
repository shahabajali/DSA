class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n  =nums.size();
        int left = 0;
        int ans =  INT_MAX;
        int sum = 0;
        for(  int right = 0;  right<n;right++){
            sum += nums[right];
            while(  sum >=  target ){
                ans =  min(ans, right-left+1); //  min length find supose right 0 and left 0   0-0+1 one length for target
                sum -=nums[left];    //  left vlue remove for next itration

                left++;  //  left indx imporove forn min length find
            }
        }
        return ans == INT_MAX?0:ans;  //  if not exit minimum leng print 0 other wise print ans
    }
};