class Solution {
public:

void backtrack(int idx, int target, vector<int>& candidates,
                   vector<int>& curr, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(curr);
            return;
        }

        if (target < 0) return;

        for (int i = idx; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            backtrack(i, target - candidates[i], candidates, curr, result);
            curr.pop_back(); // backtrack
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> result;
        vector<int> curr;

        backtrack(0, target, candidates, curr, result);
        return result;
    }
};