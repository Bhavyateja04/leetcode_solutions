class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;

        for (int num = num1; num <= num2; num++) {
            vector<int> digits;
            int temp = num;

            while (temp > 0) {
                digits.push_back(temp % 10);
                temp /= 10;
            }

            // reverse(digits.begin(), digits.end());

            for (int i = 1; i < digits.size() - 1; i++) {
                if ((digits[i] > digits[i - 1] && digits[i] > digits[i + 1]) ||
                    (digits[i] < digits[i - 1] && digits[i] < digits[i + 1])) {
                    total++;
                }
            }
        }

        return total;
    }
};