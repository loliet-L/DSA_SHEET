/*
Given an integer array nums, return the length of the longest strictly increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].

 

Example 1:

Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
*/

#include<bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
        vector<int> memory(nums.size(), 1);
        int max = 1;
        for(int i=1; i<nums.size(); i++) {
            for(int j=0; j<i; j++) {
                if(nums[j]<nums[i] && memory[j]+1 > memory[i]) {
                    memory[i] = memory[j]+1;
                    if(max < memory[i]) max = memory[i];
                }
            }
        }
        return max;
    }

    