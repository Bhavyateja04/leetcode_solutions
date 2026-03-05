class Solution {
public:
    bool isPerfectSquare(int num) {
   int value=sqrt(num);
   if(num==value*value) return true;
   return false;
    }
};