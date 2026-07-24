class Solution {
public:
    int longestPalindrome(string s) {
         int freq[128] = {0};
        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (int count : freq) {
            length += (count / 2) * 2;
            if (count % 2 != 0) {
                hasOdd = true;
            }
        }

        if (hasOdd) {
            length++;
        }

        return length;
    }
};