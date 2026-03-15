class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while(b){
            if(b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }

    long long nCr(long long n, long long r) {
        if(r > n) return 0;
        long long num = 1, den = 1;
        for(int i=0;i<r;i++){
            num = num*(n-i)%MOD;
            den = den*(i+1)%MOD;
        }
        return num * modPow(den, MOD-2) % MOD;
    }

    int countKSubsequencesWithMaxBeauty(string s, int k) {

        vector<long long> freq(26,0);
        for(char c : s) freq[c-'a']++;

        vector<long long> f;
        for(auto x : freq)
            if(x) f.push_back(x);

        if(f.size() < k) return 0;

        sort(f.begin(), f.end(), greater<long long>());

        long long ans = 1;
        long long kth = f[k-1];

        int greaterCount = 0;
        int equalCount = 0;

        for(auto x : f){
            if(x > kth){
                ans = (ans * x) % MOD;
                greaterCount++;
            }
            else if(x == kth)
                equalCount++;
        }

        int need = k - greaterCount;

        ans = (ans * modPow(kth, need)) % MOD;
        ans = (ans * nCr(equalCount, need)) % MOD;

        return ans;
    }
};