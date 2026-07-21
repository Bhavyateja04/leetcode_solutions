class Solution {
public:
    int scoreOfString(string s) {
        int totalScore = 0;
        for (size_t i = 0; i < s.length() - 1; ++i) {
            totalScore +=abs(s[i] - s[i + 1]);
        }
        
        return totalScore;
    }
};