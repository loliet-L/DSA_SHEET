/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/
#include <bits/stdc++.h>
using namespace std;

// #1. Make an extra copy and then rotate.
// Time complexity: O(n). Space complexity: O(n).

    class Solution 
    {
    public:
        void rotate(int nums[], int n, int k) 
        {
            if ((n == 0) || (k <= 0))
            {
                return;
            }
            
            // Make a copy of nums
            vector<int> numsCopy(n);
            for (int i = 0; i < n; i++)
            {
                numsCopy[i] = nums[i];
            }
            
            // Rotate the elements.
            for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = numsCopy[i];
            }
        }
    };
// #2. Start from one element and keep rotating until we have rotated n different elements.
// Time complexity: O(n). Space complexity: O(1).

   
        void rotate(int nums[], int n, int k) 
        {
            if ((n == 0) || (k <= 0))
            {
                return;
            }
            
            int cntRotated = 0;
            int start = 0;
            int curr = 0;
            int numToBeRotated = nums[0];
            int tmp = 0;
            // Keep rotating the elements until we have rotated n 
            // different elements.
            while (cntRotated < n)
            {
                do
                {
                    tmp = nums[(curr + k)%n];
                    nums[(curr+k)%n] = numToBeRotated;
                    numToBeRotated = tmp;
                    curr = (curr + k)%n;
                    cntRotated++;
                } while (curr != start);
                // Stop rotating the elements when we finish one cycle, 
                // i.e., we return to start.
                
                // Move to next element to start a new cycle.
                start++;
                curr = start;
                numToBeRotated = nums[curr];
            }
        }
//     };
// #3. Reverse the first n - k elements, the last k elements, and then all the n elements.
// Time complexity: O(n). Space complexity: O(1).

        void rotate(int nums[], int n, int k) 
        {
            k = k%n;
    
            // Reverse the first n - k numbers.
            // Index i (0 <= i < n - k) becomes n - k - i.
            reverse(nums, nums + n - k);
            
            // Reverse tha last k numbers.
            // Index n - k + i (0 <= i < k) becomes n - i.
            reverse(nums + n - k, nums + n);
            
            // Reverse all the numbers.
            // Index i (0 <= i < n - k) becomes n - (n - k - i) = i + k.
            // Index n - k + i (0 <= i < k) becomes n - (n - i) = i.
            reverse(nums, nums + n);
        }

// #4. Swap the last k elements with the first k elements.
// Time complexity: O(n). Space complexity: O(1).


    void rotate(int nums[], int n, int k) 
    {
        for (; k = k%n; n -= k, nums += k)
        {
            // Swap the last k elements with the first k elements. 
            // The last k elements will be in the correct positions
            // but we need to rotate the remaining (n - k) elements 
            // to the right by k steps.
            for (int i = 0; i < k; i++)
            {
                swap(nums[i], nums[n - k + i]);
            }
        }
    }

// #5. Keep swapping two subarrays.
// Time complexity: O(n). Space complexity: O(1).


    void rotate(int nums[], int n, int k) 
    {
        if ((n == 0) || (k <= 0) || (k%n == 0))
        {
            return;
        }
        
        k = k%n;
        // Rotation to the right by k steps is equivalent to swapping 
        // the two subarrays nums[0,...,n - k - 1] and nums[n - k,...,n - 1].
        int start = 0;
        int tmp = 0;
        while (k > 0)
        {
            if (n - k >= k)
            {
                // The left subarray with size n - k is longer than 
                // the right subarray with size k. Exchange 
                // nums[n - 2*k,...,n - k - 1] with nums[n - k,...,n - 1].
                for (int i = 0; i < k; i++)
                {
                    tmp = nums[start + n - 2*k + i];
                    nums[start + n - 2*k + i] = nums[start + n - k + i];
                    nums[start + n - k + i] = tmp;
                }
                
                // nums[n - 2*k,...,n - k - 1] are in their correct positions now.
                // Need to rotate the elements of nums[0,...,n - k - 1] to the right 
                // by k%n steps.
                n = n - k;
                k = k%n;
            }
            else
            {
                // The left subarray with size n - k is shorter than 
                // the right subarray with size k. Exchange 
                // nums[0,...,n - k - 1] with nums[n - k,...,2*(n - k) - 1].
                for (int i = 0; i < n - k; i++)
                {
                    tmp = nums[start + i];
                    nums[start + i] = nums[start + n - k + i];
                    nums[start + n - k + i] = tmp;
                }
                
                // nums[n - k,...,2*(n - k) - 1] are in their correct positions now.
                // Need to rotate the elements of nums[n - k,...,n - 1] to the right 
                // by k - (n - k) steps.
                tmp = n - k;
                n = k;
                k -= tmp;
                start += tmp;
            }
        }
    }
