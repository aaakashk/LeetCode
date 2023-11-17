class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int currSum = 0;
        vector<int> res;
        sort(nums.begin(), nums.end(), [&](auto a, auto b) { return a > b; });
        int prefixSum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); ++i) {
            currSum += nums[i], prefixSum -= nums[i];
            res.push_back(nums[i]);
            if (currSum > prefixSum) break;
        }
        return res;
    }
};