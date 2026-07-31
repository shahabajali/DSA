class Solution {
public:
    string countAndSay(int n) {
        if( n== 1){
            return "1";  // base case

        }
        string say =  countAndSay(n-1);

        // processing
        string result = "";
        for(  int i =0 ;  i<say.length(); i++){
            char ch =  say[i];
            int count = 1;
           
            while( i< say.length() && say[i] == say[i +1] ){
                count++;
                i++;
            }

            result += to_string(count)+string(1,ch);


        }
        
       return result; 
    }
};