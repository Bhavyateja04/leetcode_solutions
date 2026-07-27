class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
            sum=(nums[i]-1)*(nums[j]-1);
           }
        }
        return sum;
    }
};