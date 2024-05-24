class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            rightSum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            rightSum -= nums[i];
            answer.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }
        return answer;
    }
};