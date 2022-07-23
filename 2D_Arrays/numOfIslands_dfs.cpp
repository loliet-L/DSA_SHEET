/*
Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting 
of '0's (Water) and '1's(Land). Find the number of islands.

Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally 
or vertically or diagonally i.e., in all 8 directions.

Example 1:

Input:
grid = {{0,1},{1,0},{1,1},{1,0}}
Output:
1
Explanation:
The grid is-
0 1
1 0
1 1
1 0
All lands are connected.
*/





#include<iostream>
#include<vector>
using namespace std;


void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i>=grid.size() || j>= grid[0].size()|| j<0 || i<0 || grid[i][j] == '0')
            return ;
        grid[i][j] = '0';
        dfs(grid,i+1,j);   
        dfs(grid,i,j+1);  
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i-1,j+1);  
        dfs(grid,i-1,j-1);
        dfs(grid,i+1,j+1);  
        dfs(grid,i+1,j-1);  
    }
    
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i =0 ;i<grid.size(); i++)
            for(int j =0; j<grid[0].size(); j++)
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    ans++;
                }
        return ans;
    }