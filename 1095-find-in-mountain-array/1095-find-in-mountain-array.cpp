/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length();
        int l = 1, r = length - 2, m = 0;
        while(l <= r) {
            m = (l + r) / 2;
            int left = mountainArr.get(m - 1);
            int mid = mountainArr.get(m);
            int right = mountainArr.get(m + 1);
            if (left < mid && mid < right) l = m + 1;
            else if (left > mid && mid > right) r = m - 1;
            else break;
        }
        int peak = m;
        l = 0, r = peak;
        while(l <= r) {
            m = (l + r) / 2;
            int val = mountainArr.get(m);
            if (val < target) l = m + 1;
            else if (val > target) r = m - 1;
            else return m;
        }
        l = peak, r = length - 1;
        while(l <= r) {
            m = (l + r) / 2;
            int val = mountainArr.get(m);
            if (val > target) l = m + 1;
            else if (val < target) r = m - 1;
            else return m;
        }
        return -1;
    }
};