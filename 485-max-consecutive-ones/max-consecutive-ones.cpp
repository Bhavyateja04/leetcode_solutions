class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int consecutiveOnes=0;
        int maxConsecutive=0;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
            consecutiveOnes++;
           }
           else {
            maxConsecutive=max(maxConsecutive,consecutiveOnes);
            consecutiveOnes=0;
           }

        }
        return max(maxConsecutive,consecutiveOnes);
    }
};