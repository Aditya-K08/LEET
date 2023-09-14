class Solution {
public:
    void permutation(vector<int> nums, vector<vector<int>>& ans, int start, int end) {
        if (start == end) {
            ans.push_back(nums);
            return;
        }
        for (int i = start; i <= end; i++) {
            swap(nums[start], nums[i]);
            permutation(nums, ans, start + 1, end);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        permutation(nums, ans, 0, n - 1);
        return ans;
    }
};
