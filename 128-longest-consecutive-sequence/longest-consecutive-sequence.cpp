class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for(int m : st) {
            // check if m is start of sequence
            if(st.find(m - 1) == st.end()) {
                int current = m;
                int count = 1;

                // keep checking next consecutive numbers
                while(st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};
