class Solution {
public:
    int helper(vector<int>& nums, int start, int end) {
        if (start == end)
            return nums[start];

        int pick_start = nums[start] - helper(nums, start + 1, end);
        int pick_end = nums[end] - helper(nums, start, end - 1);

        return max(pick_start, pick_end);
    }

    bool predictTheWinner(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1) >= 0;
    }
};