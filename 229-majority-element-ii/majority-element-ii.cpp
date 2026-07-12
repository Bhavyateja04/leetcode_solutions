class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> count;
        std::vector<int> result;
        int n = nums.size();
        for (int num : nums) {
            count[num]++;
        }
        for (const auto& entry : count) {
            if (entry.second > n / 3) {
                result.push_back(entry.first);
            }
        }
        
        return result;
    }
};