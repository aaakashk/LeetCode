class Solution {
public:
    
    int candidateElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
            else if(nums[i] == candidate) count++;
            else count--;
        }
        return candidate;
    }
    
    int isMajority(vector<int>& nums, int candidate) {
        int count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == candidate) count++;
        }
        if(count > nums.size() / 2) return candidate;
        return -1;
    }
    
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> map;
        // for(int i : nums) map[i]++;
        // for(int i : nums) {
        //     if(map[i] > nums.size() / 2) return i;
        // }
        // return -1;
        
        // Moore's Voting Algorithm
        int candidate = candidateElement(nums);
        return isMajority(nums, candidate);
    }
};