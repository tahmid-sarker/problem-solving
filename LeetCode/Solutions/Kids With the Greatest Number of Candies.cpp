class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maximun = 0;
        int size = candies.size();
        for (int i = 0; i < size; i++) {
            maximun = max(maximun, candies[i]);
        }
        for (int i = 0; i < size; i++) {
            candies[i] += extraCandies;
            if (candies[i] >= maximun) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};