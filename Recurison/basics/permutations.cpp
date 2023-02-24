#include<bits/stdc++.h>
using namespace std;


void permutations( string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for ( int i =0;i<s.size();i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        permutations(ros,ans+ch);
    }


}

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/

vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        DFS(res, nums, 0);
        return res;        
    }
    
    void DFS(vector<vector<int>>& res, vector<int> nums, int pos){
        if(pos == nums.size() - 1){
            res.push_back(nums);
            return;
        }
        for(int i = pos; i < nums.size(); i++){
            swap(nums[pos], nums[i]);
            DFS(res, nums, pos + 1);
            // swap(nums[pos], nums[i]);
        }
    }


int main()
{
    string s="ABC";
    permutations(s,"");
    return 0;
}