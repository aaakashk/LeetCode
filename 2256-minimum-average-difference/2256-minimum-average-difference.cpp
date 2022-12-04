class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int sum_from_right = 0, sum_from_left = 0;
        for(int i : nums) sum_from_right += i;
        int index = 0, min = INT_MAX;
        for(int i = 0; i < nums.size(); ++i) {
            sum_from_left += nums[i];
            sum_from_right -= nums[i];
            int avg_from_left = sum_from_left / (i + 1);
            int avg_from_right = i < nums.size() - 1 ? sum_from_right / (nums.size() - i - 1) : 0;
            int abs_diff = abs(avg_from_left - avg_from_right);
            if(abs_diff < min) {
                min = abs_diff;
                index = i;
            }
        }
        return index;
    }
};