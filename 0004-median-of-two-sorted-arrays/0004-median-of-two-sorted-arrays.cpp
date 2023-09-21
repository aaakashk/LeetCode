class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0L;
        int new_array_size = nums1.size() + nums2.size();
        int new_array[new_array_size];
        int i = 0, j = 0, k = 0;
        while(k < new_array_size) {
            if(i != nums1.size() && j != nums2.size()) {
            if(nums1[i] < nums2[j])
                new_array[k++] = nums1[i++];
            else
                new_array[k++] = nums2[j++];
            }
            else if(i < nums1.size())
                new_array[k++] = nums1[i++];
            else
                new_array[k++] = nums2[j++];
        }
        if(new_array_size & 1) median = new_array[new_array_size / 2];
        else {
            double median1 = new_array[new_array_size / 2];
            double median2 = new_array[new_array_size / 2 - 1];
            median = (median1 + median2) / 2;
        }
        return median;
    }
};