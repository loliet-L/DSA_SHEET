// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4


#include<bits/stdc++.h>
using namespace std;



int singleNumber(vector<int>& nums) {
       int ans=0;
       for(auto i : nums)ans^=i;
       return ans;
    }
  

int main()
{
    vector<int> v={1,2,1,2,4};

    cout<<singleNumber(v);

    



    return 0;
}    