// leetcode 128
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// Example 3:

// Input: nums = [1,0,1,2]
// Output: 3
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109

// solution 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=0;
        for(int i:s){
            if(!s.count(i-1)){
                int cnt=1;
                int x=i+1;
                while(s.count(x)){
                    cnt++;
                    x=x+1;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};

// Time complexity=O(n) average
// space complexity =O(n)(unordered_Set)