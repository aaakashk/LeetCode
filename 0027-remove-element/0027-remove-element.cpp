class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, n = nums.size(), cnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != val) {
                nums[k++] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};