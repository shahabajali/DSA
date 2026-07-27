class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        //  freq store of ech element
        for(  char f:  tasks){
            freq[f-'A']++;
        }

        // create max heap and freq add in heap
        priority_queue<int>pq;
        for(int p :freq){
            if(p>0){
                pq.push(p);
            }
        }
        //chek task completation times
        int time =0; 
        while (!pq.empty()){
            vector<int>temp;
            // without reapat char n+1 times
            for(  int i = 0 ;i <=n ;i++){
                if(!pq.empty()){
                    int curr =  pq.top();
                    pq.pop();
                    curr--;
                    if(curr > 0){
                        temp.push_back(curr);
                    }
                }
                time++;
                // if tem and p empety break
            if(pq.empty() && temp.empty() ){
                break;
            }
            }
            
            // if tem have value push inpq
            for( int x:temp){
                pq.push(x);
            }
        }
        return time;
    }
};