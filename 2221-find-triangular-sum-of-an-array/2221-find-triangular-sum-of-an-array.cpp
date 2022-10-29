class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; ++i) {
            for(int j = 0; j < nums.size() - 1; ++j) {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
            nums.resize(nums.size() - 1);
        }
        return nums[0];
    }
};