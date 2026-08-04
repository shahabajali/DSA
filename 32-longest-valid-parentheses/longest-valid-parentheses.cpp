class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int maxLength = 0;
        stack<int> st;   // stack of indices
        st.push(-1);     // base index

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);  // reset base
                } else {
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }
        return maxLength;
    }
};
