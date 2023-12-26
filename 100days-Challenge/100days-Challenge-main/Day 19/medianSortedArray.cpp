/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

*/

class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

       // Using Binary Search 
       int n1 = nums1.size();
       int n2 = nums2.size();

        if (n1 > n2) return findMedianSortedArrays(nums2, nums1);

        int low = 0;
        int high = n1;
        int left = (n1 + n2 + 1) / 2;
        int n = n1 + n2;

        while (low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = left - mid1;
            int l1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int l2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int r1 = (mid1 == n1) ? INT_MAX : nums1[mid1];
            int r2 = (mid2 == n2) ? INT_MAX : nums2[mid2];

            if (l1 <= r2 && l2 <= r1) {
                if (n % 2 == 1) {
                    return max(l1, l2);
                } else {
                    return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
                }
            } else if (l1 > r2) {
                high = mid1 - 1;
            } else {
                low = mid1 + 1;
            }
        }

        return 0;
    /* 
   T.C -> O(n)
    vector<int> merged;
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(merged));

    int size = merged.size();
    if (size % 2 == 0) {
        return (merged[size / 2 - 1] + merged[size / 2]) / 2.0;
    } else {
        return merged[size / 2];
    }*/
    }
};