class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 1, r = arr.size() - 2, m;
        while(l <= r) {
            m = (l + r) / 2;
            int left = arr[m - 1];
            int mid = arr[m];
            int right = arr[m + 1];
            if (left < mid && mid < right) l = m + 1;
            else if (left > mid && mid > right) r = m - 1;
            else break;
        }
        return m;
    }
};