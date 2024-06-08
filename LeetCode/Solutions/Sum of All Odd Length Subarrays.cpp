class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        int sum = 0;
        for (int i = 1; i <= nums.size(); i = i + 2) {
            for (int j = 0; j + i <= nums.size(); j++) {
                for (int k = j; k < j + i; k++) {
                    sum = sum + nums[k];
                }
            }
        }
        return sum;
    }
};