class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, currSum = 0, resultantLength = INT_MAX;
        for(int right = 0; right < nums.size(); ++right) {
            currSum += nums[right];
            while(currSum >= target) {
                resultantLength = min(resultantLength, right - left + 1);
                currSum -= nums[left++];
            }

        }
        return resultantLength == INT_MAX ? 0 : resultantLength;
    }
};