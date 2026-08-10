class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0);

        for (char ch : s1)
            freq1[ch - 'a']++;

        int windSize = s1.length();

        for (int i = 0; i < s2.length(); i++) {
            int windind = 0;
            int ind = i;
            vector<int> windFreq(26, 0);

            while (windind < windSize && ind < s2.length()) {
                windFreq[s2[ind] - 'a']++;
                windind++;
                ind++;
            }

            if (windFreq == freq1)
                return true;
        }

        return false;
    }
};