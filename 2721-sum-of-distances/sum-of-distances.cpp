class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        
        vector<long long> result(n, 0);
        
        for (auto& [val, indices] : mp) {
            int k = indices.size();
            
            vector<long long> prefix(k, 0);
            prefix[0] = indices[0];
            
            for (int i = 1; i < k; i++) {
                prefix[i] = prefix[i - 1] + indices[i];
            }
            
            for (int i = 0; i < k; i++) {
                long long idx = indices[i];
                
                long long leftSum = (i > 0) ? prefix[i - 1] : 0;
                long long leftCount = i;
                long long left = idx * leftCount - leftSum;
                
                long long rightSum = prefix[k - 1] - prefix[i];
                long long rightCount = k - i - 1;
                long long right = rightSum - idx * rightCount;
                
                result[idx] = left + right;
            }
        }
        
        return result;
    }
};