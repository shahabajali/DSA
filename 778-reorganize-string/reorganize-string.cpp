class Solution {
public:
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        for(char ch :s){    // each ch freq count
            freq[ch-'a']++;
        }   
        int n =  s.length();
        for( int i =0 ; i<26; i++){
            if(freq[i] > (n+1)/2){      // trverse ato z  if chrector ki freq >  n se return
                return "";
            }
        }
          priority_queue<pair<int,char>> pq;   //  first freq strom freq base pe create max heap
        for( int i = 0; i<26; i++){
                      if(freq[i] > 0){
                pq.push({freq[i], char('a'+i)}); // ascli change int to chrector
            }

        }
        string ans ;

        pair<int,char>prev= {0 ,'#'};   //  prev value stor
        while(!pq.empty()){
            auto[count,ch] =  pq.top();   //  top freq, and ch stor
            pq.pop();
            ans += ch;      //  push ch in answer
            count --;       //  freq decrease
            if(prev.first > 0){    //  prev push in heap
                pq.push(prev);
            }
            prev={count,ch};   //  count freq and cha store in prev
        }
        return ans;
    }
};     