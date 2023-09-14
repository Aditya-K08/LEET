class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int l = j + 1;
                int k = n - 1;

                while (l < k) {
                    long long sum = static_cast<long long>(nums[i]) + static_cast<long long>(nums[j]) + static_cast<long long>(nums[l]) + static_cast<long long>(nums[k]);

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[k]});
                        while (l < k && nums[l] == nums[l + 1]) l++;
                        while (l < k && nums[k] == nums[k - 1]) k--;
                        l++;
                        k--;
                    } else if (sum < target) {
                        l++;
                    } else {
                        k--;
                    }
                }
            }
        }

        return ans;
    }

};