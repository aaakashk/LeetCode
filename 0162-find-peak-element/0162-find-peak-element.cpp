class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // if(nums.size() == 1) return 0;
        // if(nums.size() == 2) return nums[0] > nums[1] ? 0 : 1;
        // int l = 0, r = nums.size() - 1, m;
        // while(l <= r) {
        //     m = l + (r - l) / 2;
        //     int left = nums[m - 1];
        //     int mid = nums[m];
        //     int right = nums[m + 1];
        //     if (left < mid && mid < right) l = m + 1;
        //     else if (left > mid && mid > right) r = m - 1;
        //     else return m;
        // }
        // return -1;
        return max_element(nums.begin(), nums.end()) - nums.begin();
    }
};