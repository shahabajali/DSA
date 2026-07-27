class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long maxsubbray =  0;
        int n  = nums.size();
        long long sum = 0;
        //  k length sum 
        for(  int i =0; i<k; i++){
            sum += nums[i];
        }
        maxsubbray =  sum ;

        //  sliding window sum 
        for(  int i = k; i<n; i++){
            sum += nums[i]; //  ith add
            sum  -= nums[i-k]; // and remove first  i-k idx //window slid here
            maxsubbray = max(maxsubbray,sum);
        }
        return (double)maxsubbray/k;        
    }
};