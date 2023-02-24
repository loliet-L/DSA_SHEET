// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
// and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside 
// the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements 
// denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. 
// nums2 has a length of n.



// Example 1:

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.


#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n==0)return;
    if(m==0)
    {
        for(int i=0;i<n;i++)
        {
            nums1[i]=nums2[i];
        }
    }

        int i = m-1;
        int j =n-1;
        int tar = n+m-1;
        
        while (j >=0){
            if (i>=0 && nums1[i] > nums2[j]){
                nums1[tar] = nums1[i];
                tar -=1;
                i -=1;
            }
            else{
                nums1[tar] = nums2[j];
                tar -=1;
                j -=1;
            }
        }
   
}

int main()
{
    vector<int>n1={1};
    vector<int>n2={};
    merge(n1,1,n2,0);
    for(auto i:n1)cout<<i<<" ";
    return 0;
}