/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
#include<bits/stdc++.h>
using namespace std;

//   <<<--------MY SOLUTION------->>>

void moveZeroes(vector<int>& nums) {
         int last = 0, cur = 0;
    
    while(cur < nums.size()) {
        if(nums[cur] != 0) {
            swap(nums[last], nums[cur]);
            last++;
        }
        
        cur++;
    }
       
        
    }


// <<<ANOTHER APPROACH>>>

// It is easy to create your own solution to this problem, take this for instance:

void moveZeroes(vector<int>& nums)
{
	for(int i=0,next=0;i<nums.size();++i)
		if(nums[i])
			swap(nums[i],nums[next++]);
}
// and an interviewer would probably ask you to do so even if you bring up one of the other solutions I mention here,
// but it is also important to know your STL. An interviewer might be more impressed with this solution that uses std::stable_parition:

void moveZeroes(vector<int>& nums)
{
    stable_partition(begin(nums),end(nums),[](int i){return i;});
}

// But you can even avoid using a lambda if you know your STL extremely well—check this out:

void moveZeroes(vector<int>& nums)
{
    stable_partition(rbegin(nums),rend(nums),logical_not<int>());
}
// std::logical_not is template function object that returns !argument for whatever is passed in. 
// If the number is non-zero it will return false and if it is zero it will return true. 
