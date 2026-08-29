class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minstr=strs[0].length();
        for(int i=1;i<strs.size();i++){
            if(strs[i].length() < minstr){
                minstr=strs[i].length();
            }
        }
        string ans = "";

        for (int i = 0; i < minstr; i++) {
            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != ch) {
                    return ans;
                }
            }
            ans += ch;
        }

        return ans;
    }
};