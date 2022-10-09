class Solution {
public:
    int countLatticePoints(vector<vector<int>>& c) {
        int n = c.size();
        set<pair<int, int> > s;
        for(int i = 0; i < n; ++i) {
            int x = c[i][0], y = c[i][1], r = c[i][2];
            for(int j = x - r; j <= x + r; ++j) {
                for(int k = y - r; k <= y + r; ++k) {
                    if((x - j) * (x - j) + (y - k) * (y - k) <= (r * r)) s.insert({j, k});
                       
                }
            }
        }
        return s.size();
    }
};