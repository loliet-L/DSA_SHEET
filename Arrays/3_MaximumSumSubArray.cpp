/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxSum = sum;
        for(int i=1;i<nums.size();i++)
        {
            sum = max(sum+nums[i],nums[i]);
            maxSum = max(maxSum,sum);
        }   
        return maxSum;
    }
};




