class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for (string& word : words) {
            int rem = 0;

            for (char ch : word) {
                rem = (rem + weights[ch - 'a']) % 26;
            }

            ans += char('a' + (25 - rem));
        }

        return ans;
    }
};