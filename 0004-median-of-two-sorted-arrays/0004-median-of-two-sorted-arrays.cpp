class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int i = 0, j = 0, median1 = 0, median2 = 0;
        
        for(int k = 0; k <= (m + n) / 2; ++k) {
            median2 = median1;
            if(i != m && j != n) {
                if(nums1[i] < nums2[j])
                    median1 = nums1[i++];
                else
                    median1 = nums2[j++];
            }
            else if(i < m)
                median1 = nums1[i++];
            else median1 = nums2[j++];
        }
        
        if(m + n & 1) return static_cast<double>(median1);
        return (static_cast<double>(median1) + static_cast<double>(median2)) / 2.0;
    }
};