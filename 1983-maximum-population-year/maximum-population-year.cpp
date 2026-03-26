class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> year(2051, 0); 
        for(auto &log : logs) {
            year[log[0]]++;   
            year[log[1]]--;  
        }

        int maxPop = 0;
        int curr = 0;
        int ans = 1950;

        for(int i = 1950; i <= 2050; i++) {
            curr += year[i];
            if(curr > maxPop) {
                maxPop = curr;
                ans = i;
            }
        }

        return ans;
    }
};