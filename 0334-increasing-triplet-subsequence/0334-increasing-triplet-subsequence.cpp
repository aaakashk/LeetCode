class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int highest = INT_MAX, secondHighest = INT_MAX;
        for(int i : nums) {
            if(i <= highest) highest = i;
            else if(i <= secondHighest) secondHighest = i;
            else return true;
        }
        return false;
    }
};