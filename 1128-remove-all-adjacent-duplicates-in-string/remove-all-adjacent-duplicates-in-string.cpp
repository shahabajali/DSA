class Solution {
public:
    string removeDuplicates(string s) {
        vector<char>ans;
        int n =  s.length();
        for(  int i = 0;i<n;i++){
            if(!ans.empty() && ans.back() == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        string result( ans.begin(),ans.end());

        return result;
    }
};