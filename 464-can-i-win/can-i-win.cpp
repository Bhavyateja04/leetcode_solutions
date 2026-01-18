class Solution {
public:
     unordered_map<int, bool> memo;
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
         int sum = maxChoosableInteger * (maxChoosableInteger + 1) / 2;
        if (desiredTotal <= 0) return true;
        if (sum < desiredTotal) return false;

        return canWin(maxChoosableInteger, desiredTotal, 0);
    }

    bool canWin(int maxInt, int total, int usedMask) {
        if (memo.count(usedMask)) return memo[usedMask];

        for (int i = 1; i <= maxInt; i++) {
            int bit = 1 << (i - 1);

            if ((usedMask & bit) == 0) { // if i not used
                if (i >= total || !canWin(maxInt, total - i, usedMask | bit)) {
                    return memo[usedMask] = true;
                }
            }
        }

        return memo[usedMask] = false;
    }
};