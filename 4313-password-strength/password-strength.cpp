class Solution {
public:
    int passwordStrength(string password) {
        set<char> visited;
        int total = 0;

        for (char ch : password) {
            if (visited.count(ch)) continue;

            visited.insert(ch);

            if (ch >= 'a' && ch <= 'z') {
                total += 1;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                total += 2;
            }
            else if (ch >= '0' && ch <= '9') {
                total += 3;
            }
            else { 
                total += 5;
            }
        }

        return total;
    }
};