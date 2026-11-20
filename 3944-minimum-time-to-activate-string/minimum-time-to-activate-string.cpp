class Solution {
public:
    long long countSubstrings(int len) {
        return 1LL * len * (len + 1) / 2;
    }

    int minTime(string s, vector<int>& order, int k) {
        int n = s.size();

        long long totalSubstrings = 1LL * n * (n + 1) / 2;
        long long invalid = totalSubstrings;

        set<int> starPositions;
        starPositions.insert(-1);
        starPositions.insert(n);

        for (int t = 0; t < n; t++) {
            int pos = order[t];

            auto it = starPositions.lower_bound(pos);
            int next = *it;
            int prev = *std::prev(it);

            int oldLen = next - prev - 1;
            int leftLen = pos - prev - 1;
            int rightLen = next - pos - 1;

            invalid -= countSubstrings(oldLen);
            invalid += countSubstrings(leftLen);
            invalid += countSubstrings(rightLen);

            starPositions.insert(pos);

            long long valid = totalSubstrings - invalid;

            if (valid >= k)
                return t;
        }

        return -1;
    }
};