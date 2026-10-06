class Solution {
public:
    int minAddToMakeValid(string s) {
        int b=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
                b++;
            }
            else{
                if(b>0){
                    b--;
                }
                else{
                    ans++;
                }
            }
        }
        return ans+b;
    }
};