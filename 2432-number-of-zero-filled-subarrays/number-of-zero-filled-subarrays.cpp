class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count++;
            else count=0;
            ans+=count;
        }
        return ans;
    }
};