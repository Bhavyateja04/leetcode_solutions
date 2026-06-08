class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        vector<int>greater;
        vector<int>equal;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < pivot){
                small.push_back(nums[i]);
            }else if(nums[i]>pivot){
                greater.push_back(nums[i]);
            }
            else{
                equal.push_back(nums[i]);
            }

        }
        // for(int i=0;i<small.size();i++){
        //     cout<<small[i]<<" ";
        // }
        // for(int i=0;i<equal.size();i++){
        //     cout<<equal[i]<<" ";
        // }
        // for(int j=0;j<greater.size();j++){
        //     cout<<greater[j]<<" ";
        // }
         ans.insert(ans.end(), small.begin(), small.end());
         ans.insert(ans.end(), equal.begin(), equal.end());
         ans.insert(ans.end(), greater.begin(), greater.end());

        return ans;
    }
};