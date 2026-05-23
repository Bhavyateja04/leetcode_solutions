class Solution {
public:
    bool check(vector<int>& nums) {
        int dip = 0;
        int n = nums.size();
        for(int i = 1; i<n; i++){
            if(nums[i]<nums[i-1]) dip++;
        }
        if(nums[n-1]>nums[0])dip++;
        return dip<=1;
    }
};