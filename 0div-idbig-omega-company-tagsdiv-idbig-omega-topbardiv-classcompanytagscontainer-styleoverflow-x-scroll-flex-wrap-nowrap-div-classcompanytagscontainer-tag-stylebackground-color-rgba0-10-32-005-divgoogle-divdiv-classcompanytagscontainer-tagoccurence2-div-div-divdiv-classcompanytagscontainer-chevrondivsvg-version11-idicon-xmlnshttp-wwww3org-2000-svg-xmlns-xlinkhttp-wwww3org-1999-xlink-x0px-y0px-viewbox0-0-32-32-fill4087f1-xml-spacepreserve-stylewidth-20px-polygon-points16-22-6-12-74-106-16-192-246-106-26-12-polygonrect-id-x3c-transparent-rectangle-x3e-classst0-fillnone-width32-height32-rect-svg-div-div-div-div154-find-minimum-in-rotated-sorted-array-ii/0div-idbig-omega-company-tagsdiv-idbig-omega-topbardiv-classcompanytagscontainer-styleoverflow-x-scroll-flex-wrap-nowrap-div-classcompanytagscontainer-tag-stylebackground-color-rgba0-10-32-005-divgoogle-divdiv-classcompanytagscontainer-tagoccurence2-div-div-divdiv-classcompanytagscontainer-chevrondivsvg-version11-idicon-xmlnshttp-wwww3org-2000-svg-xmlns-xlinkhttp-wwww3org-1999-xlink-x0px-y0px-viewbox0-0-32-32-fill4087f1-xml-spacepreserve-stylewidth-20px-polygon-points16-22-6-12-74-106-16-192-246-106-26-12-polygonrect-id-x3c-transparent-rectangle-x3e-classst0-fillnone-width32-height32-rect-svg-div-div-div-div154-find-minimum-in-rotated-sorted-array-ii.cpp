class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=nums[0];
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[low] == nums[mid] && nums[high]==nums[mid]){
                low+=1;
                high-=1;
                continue;
            }
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else high=mid; 
        }
        return nums[low];
    
            
    }
};