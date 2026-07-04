class Solution {
public:
    int numberOfChild(int n, int k) {
        k%=2*n-2;
        return n-1 - abs(n-1-k);
    }
};