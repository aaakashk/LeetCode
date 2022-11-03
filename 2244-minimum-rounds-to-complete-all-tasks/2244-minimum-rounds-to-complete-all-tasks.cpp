class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int sum = 0;
        unordered_map<int, int> umap;
        for(int& i : tasks) umap[i]++;
        for(auto it = umap.begin(); it != umap.end(); ++it) {
            if(it->second == 1) return -1;
            sum += (it->second + 2) / 3;
        }
        return sum;
    }
};