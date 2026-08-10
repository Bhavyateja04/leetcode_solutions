class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> cnt(128);
        for(char c : t)
            cnt[c]++;
        int need = t.size();
        int l = 0, start = 0, len = INT_MAX;
        for(int r = 0; r < s.size(); r++) {
            if(cnt[s[r]]-- > 0)
                need--;
            while(need == 0) {
                if(r- l+ 1 < len) {
                    len = r-l+1;
                    start = l;
                }
                if(cnt[s[l]]++ >= 0)
                    need++;
                l++;
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};