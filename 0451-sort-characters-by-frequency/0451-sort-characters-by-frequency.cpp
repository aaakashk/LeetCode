class Solution {
public:
    string frequencySort(string s) {
        string str = "";
        unordered_map<char, int> umap;
        for(char c : s) umap[c]++;
        priority_queue<pair<int, char> > pq;
        for(const auto& p : umap) pq.push({p.second, p.first});
        while(!pq.empty()) {
            pair<int, char> p = pq.top();
            pq.pop();
            for(int i = 0; i < p.first; ++i) {
                str += p.second;
            }
        }
        return str;
    }
};