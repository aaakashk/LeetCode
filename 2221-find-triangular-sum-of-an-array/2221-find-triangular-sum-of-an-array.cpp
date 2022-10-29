class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i = 0; i < n - 1; ++i) {
            vector<int> vect(nums.size() - 1);
            for(int j = 0, k = 0; j < nums.size() - 1; ++j, ++k) {
                vect[j] = (nums[k] + nums[k + 1]) % 10;
            }
            nums.resize(nums.size() - 1);
            nums = vect;
        }
        return nums[0];
    }
};