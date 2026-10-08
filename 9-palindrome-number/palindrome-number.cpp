class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) {
        return false;
    }
    unsigned int rem=0,temp=x;
     while(x>0){
        unsigned int num=x%10;
        rem=rem*10+num;
        x=x/10;
     }
     if(temp==rem){
       return true;
     }
     else {
        return false;
        }
    }
};