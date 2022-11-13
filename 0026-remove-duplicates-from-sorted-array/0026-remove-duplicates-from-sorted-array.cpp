class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int i = 1, j = 1;
        for(i = 1, j = 1; i < nums.size(); ++i) {
            if(nums[i] != nums[i - 1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};