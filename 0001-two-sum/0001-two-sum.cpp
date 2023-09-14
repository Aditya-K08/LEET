class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        int a = -1, b = -1;
        for (int i = 0; i < nums.size(); i++) {
        int comp = target - nums[i];
        
        if (map.find(comp) != map.end()) {
            b = i;
            a = map[comp];
            break;
        }
        if (map.find(nums[i]) == map.end()) {
            map[nums[i]] = i;
        }
        }
        return {a,b};
    }
};