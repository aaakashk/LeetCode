class Solution {
public:
    // using logic of Moore's Voting Algorithm
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, firstCandidate = 0, secondCandidate = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == firstCandidate) count1++;
            else if(nums[i] == secondCandidate) count2++;
            else if(count1 == 0) {
                count1++;
                firstCandidate = nums[i];
            }
            else if(count2 == 0) {
                count2++;
                secondCandidate = nums[i];
            }
            else count1--, count2--;
        }
        count1 = count2 = 0;
        vector<int> vec;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == firstCandidate) count1++;
            else if(nums[i] == secondCandidate) count2++;
        }
        if(count1 > nums.size() / 3) vec.push_back(firstCandidate);
        if(count2 > nums.size() / 3) vec.push_back(secondCandidate);
        return vec;
    }
    
        // vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int, int> map;
        // vector<int> vec;
        // for(int i : nums) map[i]++;
        // for(auto& [key, value] : map) {
        //     if(value > nums.size() / 3) vec.push_back(key);
        // }
        // return vec;  
        //}
};