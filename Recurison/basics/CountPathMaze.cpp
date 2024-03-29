/*
 1,2,3
 4,5,6
 7,8,9
 we're counting the no of paths to reach goal state from a start state 
 for eq our start state is 1 and our goal state is 9
 so  no of paths to reach 1 to 9 will be 6
 given the condition we can only move in right and downward direction

*/
#include<bits/stdc++.h>
using namespace std;

int couthPathMaze(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 0;
    }
    return couthPathMaze(n,i+1,j)+couthPathMaze(n,i,j+1);
}

/*
There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 109.

 

Example 1:


Input: m = 3, n = 7
Output: 28
*/
// <<------DP + MEMOIZATION---------->>
 int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n));
        return dfs(dp, 0, 0);
    }
    int dfs(vector<vector<int>>& dp, int i, int j) {
        if(i >= size(dp)   || j >= size(dp[0]))   return 0;     // out of bounds - invalid
        if(i == size(dp)-1 && j == size(dp[0])-1) return 1;     // reached end - valid path
        if(dp[i][j]) return dp[i][j];                           // directly return if already calculated
        return dp[i][j] = dfs(dp, i+1, j) + dfs(dp, i, j+1);    // store the result in dp[i][j] and then return
    }

int main()
{
    cout<<couthPathMaze(6,0,0);
    // cout<<couthPathSandWater(3,3,1,1);
    return 0;
}