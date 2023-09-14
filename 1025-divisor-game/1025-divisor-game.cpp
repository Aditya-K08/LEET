class Solution {
public:
    bool divisorGame(int n) {
         return n % 2 == 0;
    }
};


or BY Dp
class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n + 1, false);
        dp[0] = false;
        
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                if (i % j == 0 && !dp[i - j]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
