class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = 0;
        int sumOdd = 0;
        int evenCount = 0;
        int oddCount = 0;
        
        for (int i = 1; i <= 2 * n; i++) {
            if (i % 2 == 0) {
                if (evenCount < n) { 
                    sumEven += i;
                    evenCount++;
                }
            } else {
                if (oddCount < n) { 
                    sumOdd += i;
                    oddCount++;
                }
            }
        }
        
        return gcd(sumEven, sumOdd);
    }
};
