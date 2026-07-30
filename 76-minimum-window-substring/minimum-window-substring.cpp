class Solution {
public:
    string minWindow(string s, string t) {
        int n  = s.length();
        if(  t.length() > n){
            return "";
        }
        // noow create a map and store char and freq  in unorder_map
        unordered_map<char,int>mp;
        for(char ch :t){
            mp[ch]++;  //  charector and frequency store in a map
        }
        int requirmentCount =  t.length();
        int i = 0;   //  left side
        int j = 0; //rigth side trwares while loop and checks
        int start_i =  0;  // from these idx we  take substring
        int minWindowSize =  INT_MAX;

        while(  j < n){
            char ch =  s[j];
            if(mp[ch] > 0){
                requirmentCount--;
            
            }
                mp[ch]--;

            //
            while( requirmentCount == 0){
            int currentWindowSize =  j-i+1;
            if(minWindowSize > currentWindowSize){
                minWindowSize =currentWindowSize;
                start_i = i;  
            }
            mp[s[i]]++;
            if( mp[s[i]] > 0){
               requirmentCount++;
            }
            i++;
            }
            j++;
        }
      return minWindowSize == INT_MAX?"":s.substr(start_i,minWindowSize);
        
    }
};