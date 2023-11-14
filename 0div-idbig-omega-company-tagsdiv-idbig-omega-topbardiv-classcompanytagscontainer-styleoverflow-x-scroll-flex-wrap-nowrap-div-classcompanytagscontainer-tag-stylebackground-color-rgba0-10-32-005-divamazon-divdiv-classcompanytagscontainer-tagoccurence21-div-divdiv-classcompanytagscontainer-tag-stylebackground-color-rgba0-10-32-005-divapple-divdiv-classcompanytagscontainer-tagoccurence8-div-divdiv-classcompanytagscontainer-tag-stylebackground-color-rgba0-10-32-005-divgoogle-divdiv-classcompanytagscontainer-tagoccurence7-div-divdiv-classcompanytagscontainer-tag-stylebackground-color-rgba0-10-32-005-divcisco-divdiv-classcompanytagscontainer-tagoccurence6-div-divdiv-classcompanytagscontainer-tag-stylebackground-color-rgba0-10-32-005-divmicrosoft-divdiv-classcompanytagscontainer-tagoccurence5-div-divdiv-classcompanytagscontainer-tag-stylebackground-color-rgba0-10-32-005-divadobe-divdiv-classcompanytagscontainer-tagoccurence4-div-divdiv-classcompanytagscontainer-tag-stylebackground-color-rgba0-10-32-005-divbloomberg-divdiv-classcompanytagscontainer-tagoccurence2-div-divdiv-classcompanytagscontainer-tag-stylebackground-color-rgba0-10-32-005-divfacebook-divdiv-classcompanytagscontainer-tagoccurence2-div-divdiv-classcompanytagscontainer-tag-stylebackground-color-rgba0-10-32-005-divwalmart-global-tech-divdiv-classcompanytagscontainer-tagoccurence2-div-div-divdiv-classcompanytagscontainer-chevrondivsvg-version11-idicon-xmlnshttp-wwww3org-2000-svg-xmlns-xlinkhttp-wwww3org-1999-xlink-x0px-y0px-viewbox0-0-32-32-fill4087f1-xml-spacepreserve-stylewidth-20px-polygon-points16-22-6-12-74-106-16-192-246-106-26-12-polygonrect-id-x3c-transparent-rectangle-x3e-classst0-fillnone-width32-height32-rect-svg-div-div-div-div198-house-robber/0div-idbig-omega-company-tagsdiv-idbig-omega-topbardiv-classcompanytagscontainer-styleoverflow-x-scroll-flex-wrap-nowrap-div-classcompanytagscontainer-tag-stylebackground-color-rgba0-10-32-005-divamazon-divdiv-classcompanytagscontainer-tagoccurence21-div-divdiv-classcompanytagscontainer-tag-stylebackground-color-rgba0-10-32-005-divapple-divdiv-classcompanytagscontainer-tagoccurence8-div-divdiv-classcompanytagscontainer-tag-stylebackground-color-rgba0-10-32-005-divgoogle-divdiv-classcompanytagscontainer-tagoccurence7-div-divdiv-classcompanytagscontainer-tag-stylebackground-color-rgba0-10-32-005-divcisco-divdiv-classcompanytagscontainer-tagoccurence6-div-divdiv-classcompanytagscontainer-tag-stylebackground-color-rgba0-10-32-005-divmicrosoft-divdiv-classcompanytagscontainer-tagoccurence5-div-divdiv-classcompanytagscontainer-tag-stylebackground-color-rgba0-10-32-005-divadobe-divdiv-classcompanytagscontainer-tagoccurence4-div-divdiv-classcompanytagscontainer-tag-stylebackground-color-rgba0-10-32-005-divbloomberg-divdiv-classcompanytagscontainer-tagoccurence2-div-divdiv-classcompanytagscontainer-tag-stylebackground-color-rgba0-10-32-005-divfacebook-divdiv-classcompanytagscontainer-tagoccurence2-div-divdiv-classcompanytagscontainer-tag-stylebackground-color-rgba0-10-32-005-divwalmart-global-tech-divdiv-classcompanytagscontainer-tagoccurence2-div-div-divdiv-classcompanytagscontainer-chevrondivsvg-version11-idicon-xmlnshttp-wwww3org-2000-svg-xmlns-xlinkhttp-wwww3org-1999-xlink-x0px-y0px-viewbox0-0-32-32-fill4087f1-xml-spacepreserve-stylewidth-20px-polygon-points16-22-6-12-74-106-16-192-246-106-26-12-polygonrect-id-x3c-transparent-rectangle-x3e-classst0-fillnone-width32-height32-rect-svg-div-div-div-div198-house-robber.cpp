class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(100, -1);
        return rec(nums, 0, dp);
    }

    int rec(vector<int>& nums, int idx, vector<int>& dp) {
        if (idx >= nums.size()) return 0; 
        if (dp[idx] != -1) return dp[idx];
        int pick = rec(nums, idx + 2, dp) + nums[idx];
        int not_pick = rec(nums, idx + 1, dp);
        return dp[idx] = max(pick, not_pick);
    }
};
