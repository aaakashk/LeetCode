class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result(2, 0);
        int x = 0;
        for(int n: nums) x ^= n;
        int cnt=0;
        while(x){
            if(x & 1)
                break;
            cnt++;
            x=x>>1;
        }
        for(int n: nums) {
            if(n & (1 << cnt)) result[0] ^= n;
            else result[1] ^= n;
        }
        return result;
    }
};