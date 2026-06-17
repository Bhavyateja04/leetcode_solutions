class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push({i, tickets[i]});
        }

        int count = 0;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            curr.second--;
            count++;

            if (curr.second == 0 && curr.first == k)
                return count;
            if (curr.second > 0)
                q.push(curr);
        }

        return count;
    }
};