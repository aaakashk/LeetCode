class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> vec;
        for(int i : nums) map[i]++;
        for(auto& [key, value] : map) {
            if(value > nums.size() / 3) vec.push_back(key);
        }
        return vec;
    }
};