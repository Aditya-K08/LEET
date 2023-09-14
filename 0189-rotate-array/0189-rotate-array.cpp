class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(n==0) return;
        vector<int>v;
        v=nums;
        for(int i=0;i<n;i++){
            v[(i + k) % n]=nums[i];
        }
        nums=v;
    }
};