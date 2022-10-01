class Solution {
public:
    
    int calculate_power(int n) {
        int count = 0;
        while(n != 1) {
            if(n & 1) n = 3 * n + 1;
            else n /= 2;
            count++;
        }
        return count;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int> > vec;
        for(int i = lo; i <= hi; i++) {
            vec.push_back(make_pair(calculate_power(i), i));
        }
        sort(vec.begin(), vec.end());
        return vec[k - 1].second;
    }
};