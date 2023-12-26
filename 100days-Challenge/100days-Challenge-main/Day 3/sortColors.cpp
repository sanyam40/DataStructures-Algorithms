/*

Link : https://leetcode.com/problems/sort-colors/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

*/

// Counting Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero=0;
        int one=0;
        int two=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]==1){
                one++;
            }
            if(nums[i]==2){
                two++;
            }
        }

    int index=0;
    while(zero--){
        nums[index]=0;
        index++;
    }

    while(one--){
        nums[index]=1;
        index++;
    }
      
    while(two--){
        nums[index]=2;
        index++;
    }
}
};

// Two Pointer 

class Solution {
public:
    void sortColors(vector<int>& nums) {

      int n=nums.size();

      int index=0;
      int left=0;
      int right=n-1;

      while(index<=right){

          if(nums[index]==0){
              swap(nums[index],nums[left]);
              left++;
              index++;
          }
          else if(nums[index]==2){
              swap(nums[index],nums[right]);
              right--;
              // no need of index++
          }
          else{
              index++;
          }
      }
}
};