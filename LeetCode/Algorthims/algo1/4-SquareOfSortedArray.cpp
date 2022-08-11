/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of 
each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/
#include<bits/stdc++.h>
using namespace std;

// <<<-----DIRECT APPROACH------------------>>>  T.C -> O(nlog n) 

vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        
        
    }

//   <<<--------TWO POINTER APPROACH------------>> T.C -> O(n)

vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) res[k] = A[r] * A[r--];
            else res[k] = A[l] * A[l++];
        }
        return res;   
    }