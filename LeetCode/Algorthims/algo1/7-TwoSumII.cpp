/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that 
they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] 
where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.


Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
#include<bits/stdc++.h>
using namespace std;

//  <<<-------my approach--->>>>   time complexity: O(N) space complexity: O(1)



vector<int> twoSum(vector<int>& n, int target) {
        // vector<int>ans;
        int p1=0,p2=n.size()-1;
        while(p1<p2)
        {
            int sum =n[p1]+n[p2];
            if(sum==target)
            {
                return {p1+1,p2+1};
            }
           else if(sum>target)
               p2--;
            else{
                p1++;
            }
        }
        return {-1,-1};
        
    }

    // Using Binary Search  time complexity: O(NlogN)  space complexity: O(1)

    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
        for(int i=0;i<N-1;i++){
            int lo = i+1;
            int hi = N;
            while(lo<hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target-nums[i]) return {i+1,mid+1};
                else if(nums[mid]>=target-nums[i]) hi=mid;
                else lo = mid+1;
            }
            if(lo!=nums.size() && nums[lo]==target-nums[i]) return {i+1,lo+1};
        }
        return {}; // not found
    }