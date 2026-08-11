class Solution {
public:

    void solve(string &s, int index, int parts,
               string current, vector<string> &ans) {

        // We have created 4 parts
        if (parts == 4) {

            // All digits must be used
            if (index == s.size()) {
                current.pop_back(); // remove last '.'
                ans.push_back(current);
            }

            return;
        }

        // Try taking 1, 2 or 3 digits
        for (int len = 1; len <= 3; len++) {

            // Don't go outside the string
            if (index + len > s.size()) {
                break;
            }

            string part = s.substr(index, len);

            // Leading zero is not allowed
            if (part.size() > 1 && part[0] == '0') {
                break;
            }

            // Convert string to number
            int num = stoi(part);

            // IP part must be <= 255
            if (num > 255) {
                break;
            }

            // Choose
            solve(
                s,
                index + len,
                parts + 1,
                current + part + ".",
                ans
            );

            // No explicit undo needed
            // because current is passed by value
        }
    }

    vector<string> restoreIpAddresses(string s) {

        vector<string> ans;

        // An IP address has exactly 4 parts
        // each part has 1 to 3 digits
        if (s.size() < 4 || s.size() > 12) {
            return ans;
        }

        solve(s, 0, 0, "", ans);

        return ans;
    }
};