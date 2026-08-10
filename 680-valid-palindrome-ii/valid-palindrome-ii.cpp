class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int left = 0,right = n-1;
        int firstIdx = -1,secondIdx = -1;

        while(left<=right)
        {
            if(s[left]!=s[right])
            {
                firstIdx = left;
                secondIdx = right; 
                break;
            }
            left++;
            right--;
        }

        if(abs(firstIdx-secondIdx)<=1 || left>right) return true;

        left = firstIdx,right = secondIdx;
        left++;
        while(left<=right)
        {
            if(s[left]!=s[right]) break;
            left++;
            right--;
        }
        if(left>right) return true;


        left = firstIdx,right = secondIdx;
        right--;
        while(left<=right)
        {
            if(s[left]!=s[right]) break;
            left++;
            right--;
        }
        if(left>right) return true;

        return false;
    }
};