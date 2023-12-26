/*

Link : https://leetcode.com/problems/find-k-closest-elements/description/

Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]

*/

class Solution {
public:

    vector<int> binary(vector<int>& arr, int k, int x) {
        int h=lowerbound(arr,x);
        int l=h-1;
        while(k--){
            if(l<0) {h++;}
            else if (h>=arr.size()) l--;
            else if(x-arr[l]>arr[h]-x){
                h++;
            }
            else{
                l--;
            }
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+h);
    } 

    int lowerbound(vector<int>&arr,int x){
        int s=0,end=arr.size()-1;
        int ans=end;
        while(s<=end){
            int mid=(s+end)/2;
            if(arr[mid]>=x){
                ans=mid;
                end=mid-1;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

    // T.C: O(n)
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int low=0;
        int high=arr.size()-1;
        while(high-low>=k){
            if(x-arr[low]>arr[high]-x){
                low++;
            }
            else{
                high--;
            }
        }
        vector<int>ans;
        for(int i=low;i<=high;i++){
            ans.push_back(arr[i]);
        }
        return ans;    
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binary(arr,k,x);
    }
};