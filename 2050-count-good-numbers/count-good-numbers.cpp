class Solution {
public:
    long long MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        long long result = 1;

        while(exp) {
            if(exp % 2)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            exp /= 2;
        }

        return result;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long ans = (modPow(5, even) * modPow(4, odd)) % MOD;

        return ans;
    }
};