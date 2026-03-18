class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int pile : piles) {
                // ceil(pile / mid)
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= h) {
                high = mid - 1; // try smaller speed
            } else {
                low = mid + 1; // increase speed
            }
        }

        return low;
    }
};