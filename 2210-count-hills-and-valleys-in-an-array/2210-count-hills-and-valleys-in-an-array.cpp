class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0, last = nums[0];
        for (int i = 1; i < nums.size() - 1; ++i) {
            if(nums[i] == last) {
                continue;
            }
            else if ((nums[i] > last && nums[i] > nums[i + 1]) || (nums[i] < last && nums[i] < nums[i + 1])) {
                last = nums[i];
                count++;
            }
        }
        return count;
    }
};