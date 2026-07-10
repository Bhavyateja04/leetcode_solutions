class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
    int occurence=1;
    for(int i=1;i<nums.size();i++){
        if(major!=nums[i]){
            occurence--;
        }
        else {
            occurence++;
        }
        if(occurence==0){
            major=nums[i];
            occurence++;
        }
    }
    return major;
    }
};