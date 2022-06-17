// Given a string s, find the length of the longest substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
#include<iostream>
#include<string>
using namespace std;
int lengthOfLongestSubstring(string s) {
	// left and right are bounds of the sliding window
	int left = -1; 
	int longest = 0;
	for(int right = 0; right < s.size(); ++right)
	{
		// if any duplicate characters are detected, 
		// shrink the sliding window by moving left bound
		int i = left + 1;
		while(i < right)
		{
			if(s[i] == s[right])
			{
				left = i;
			}
			++i;
		}
		longest = max(longest, right-left);
	}
	return longest;
}