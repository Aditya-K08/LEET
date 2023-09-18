class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return true;
            if(nums[left]==nums[mid]  && nums[right] == nums[mid]){
                left+=1;
                right-=1;
                continue;
            }
            else if(nums[left] <= nums[mid]){
                if(nums[left]<=target && target<=nums[mid]) right = mid -1;
                else left = mid+1;
            }
            else{
                if(nums[mid]<=target && nums[right]>=target) left = mid+1;
                else right=mid-1;
            }
        }
        return false;
    }
};