class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
        for(int i = 1, j = 0; i < nums.size() - 1; ++i)
            if ((nums[j] < nums[i] && nums[i + 1] < nums[i]) || 
                (nums[j] > nums[i] && nums[i + 1] > nums[i])) {
                j = i;
                count++;
            }
        return count;
    }
};