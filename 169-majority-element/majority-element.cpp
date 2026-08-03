class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums.size()/2;
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        if(mpp[nums[i]]>major){
            return nums[i];
        }
        }
        return -1;
    }
};