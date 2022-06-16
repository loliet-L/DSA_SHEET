/*
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
The result is going to be very large, hence return the result in the form of a string.

Example 1:

Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,
5, 9}, the arrangement 9534330 gives the
largest value.
*/
class Solution{
public:
	static bool comp(string a, string b)
	{
	 return a+b > b+a ;
	   
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    
	    sort(arr.begin() , arr.end() , comp) ;
	    string ans ;
	    for(string s : arr)
	    {
	        ans+=s ;
	    }
	    return ans; 
	}
};
