class Solution {
public:
    void permutation(vector<int>& nums, vector<vector<int>>& ans, int start) {
        if (start == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> check;
        
        for (int i = start; i < nums.size(); i++) {
            if (check.find(nums[i]) == check.end()) {
                check.insert(nums[i]);
                swap(nums[start], nums[i]);
                permutation(nums, ans, start + 1);
                swap(nums[start], nums[i]);
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums, ans, 0);
        return ans;
    }
};



