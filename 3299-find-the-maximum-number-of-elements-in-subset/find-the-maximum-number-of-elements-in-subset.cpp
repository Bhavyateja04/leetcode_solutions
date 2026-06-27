class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> mp;
        for (int x : nums) mp[x]++;

        int ans = 1;

        if (mp.count(1)) {
            ans = (mp[1] % 2 == 0) ? mp[1] - 1 : mp[1];
        }

        for (auto &[x, cnt] : mp) {
            if (x == 1) continue;

            long long cur = x;
            int len = 0;

            while (mp.count(cur) && mp[cur] >= 2) {
                len += 2;

                if (cur > 1000000000LL) {
                    cur = LLONG_MAX;
                    break;
                }
                cur = cur * cur;
            }

            if (mp.count(cur) && mp[cur] == 1)
                len++;
            else
                len--;

            ans = max(ans, len);
        }

        return ans;
    }
};