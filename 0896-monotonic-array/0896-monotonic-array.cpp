class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // bool increasing = true, decreasing = true;
        // for(int i = 0; i < nums.size() - 1; ++i) {
        //     if (nums[i] > nums[i + 1]) increasing = false;
        //     else if (nums[i] < nums[i + 1]) decreasing = false;
        // }
        // return increasing || decreasing;
        
        int direction = 0;
        for(int i = 1; i < nums.size(); ++i) {
            if(direction > 0 && nums[i] < nums[i - 1]) return false;
            if(direction < 0 && nums[i] > nums[i - 1]) return false;
            if(direction == 0) direction = nums[i] - nums[i - 1];
        }
        return true;
    }
};