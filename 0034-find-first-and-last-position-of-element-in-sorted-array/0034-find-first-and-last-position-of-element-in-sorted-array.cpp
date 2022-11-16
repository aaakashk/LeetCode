class Solution {
public:
    
    int binarySearch(vector<int>& nums, int target, bool leftSearch) {
        int low = 0, high = nums.size() - 1, i = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                i = mid;
                if(leftSearch) {
                    high = mid - 1;
                }
                else {  
                    low = mid + 1;
                } 
            }
            else if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return i;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer(2);
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        answer[0] = left, answer[1] = right;
        return answer;
    }
};