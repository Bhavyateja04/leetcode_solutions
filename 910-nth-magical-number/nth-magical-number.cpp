class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        const int MOD = 1e9 + 7;

        long long l = 1;
        long long r = (long long)n * min(a, b);

        long long lcm = (long long)a * b / __gcd(a, b);

        while (l < r) {
            long long mid = (l + r) / 2;

            long long count = mid / a + mid / b - mid / lcm;

            if (count < n)
                l = mid + 1;
            else
                r = mid;
        }

        return l % MOD;
    }
}; 