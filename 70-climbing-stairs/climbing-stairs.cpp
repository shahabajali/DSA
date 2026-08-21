class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int prev1 = 1; // ways to climb 1 stair
        int prev2 = 2; // ways to climb 2 stairs
        int curr;

        for (int i = 3; i <= n; i++) {
            curr = prev1 + prev2; // recurrence relation
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};
