// leetcode 169
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.
 

// Follow-up: Could you solve the problem in linear time and in O(1) space?

// solution 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums.size()/2;
      int cnt=0;
      int el;
      for(int i:nums){
        if(cnt==0){
            cnt++;
            el=i;
        }
        else if(i== el) cnt++;
        else cnt--;

      }
      int cnt1=0;
      for(int i:nums){
        if (el == i) cnt1++;
      }
      if(cnt1>m) return el;
      return -1;
        
    }
};

// using moore algorithm
// time complexity = O(n);
// space complexity = O(1);