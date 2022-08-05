/*
You have a 2-D grid of size m x n representing a box, and you have n balls. The box is open on the top and bottom sides.

Each cell in the box has a diagonal board spanning two corners of the cell that can redirect a ball to the right or to the left.

A board that redirects the ball to the right spans the top-left corner to the bottom-right corner and is represented in the grid as 1.
A board that redirects the ball to the left spans the top-right corner to the bottom-left corner and is represented in the grid as -1.
We drop one ball at the top of each column of the box. Each ball can get stuck in the box or fall out of the bottom. 
A ball gets stuck if it hits a "V" shaped pattern between two boards or if a board redirects the ball into either wall of the box.

Return an array answer of size n where answer[i] is the column that the ball falls out of at the bottom after dropping the ball 
from the ith column at the top, or -1 if the ball gets stuck in the box.

Input: grid = [[1,1,1,-1,-1],[1,1,1,-1,-1],[-1,-1,-1,1,1],[1,1,1,1,-1],[-1,-1,-1,-1,-1]]
Output: [1,-1,-1,-1,-1]
Explanation: This example is shown in the photo.
Ball b0 is dropped at column 0 and falls out of the box at column 1.
Ball b1 is dropped at column 1 and will get stuck in the box between column 2 and 3 and row 1.
Ball b2 is dropped at column 2 and will get stuck on the box between column 2 and 3 and row 0.
Ball b3 is dropped at column 3 and will get stuck on the box between column 2 and 3 and row 0.
Ball b4 is dropped at column 4 and will get stuck on the box between column 2 and 3 and row 1.
Example 2:

Input: grid = [[-1]]
Output: [-1]
Explanation: The ball gets stuck against the left wall.
*/
#include<bits/stdc++.h>
using namespace std;

/* <------------APPROACH-------------->
If current grid pgrid[r][c] is a \ then check it's right column -> grid[r][c+1] is same or not 
and Go to it's digonal place -> grid[r+1][c+1] else return -1 from there and if it is / then 
check it's left column grid[r][c-1] is same or not if it same then go -> grid[r+1][c-1] else return -1 from there
If You reach last Row return Column Number <<<------- Do this task for each column
*/

bool valid(int rsize,int csize,int r,int c){
        if(rsize<=r||csize<=c||c<0||r<0)return false;
        return true;
    }
    int DFS(vector<vector<int>>& grid,int r,int c){
        if(r==grid.size())return c;
        if(valid(grid.size(),grid[0].size(),r,c)){
            if(grid[r][c]==1){
                if(valid(grid.size(),grid[0].size(),r,c+1)&&grid[r][c+1]==1){
                    return DFS(grid,r+1,c+1);
                }
            }else{
                if(valid(grid.size(),grid[0].size(),r,c-1)&&grid[r][c-1]==-1){
                    return DFS(grid,r+1,c-1);
                }
            }
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid){
        int row = grid.size(),col = grid[0].size();
        vector<int>ans(col,0);
        for(int c = 0;c<col;c++){
            ans[c] = DFS(grid,0,c);
        }
    return ans;
    }

// <<<<-------------------------ANOTHER APPPROACH----------------------------->>>>

     vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> v(n,0);
        
        for(int i=0;i<n;i++){
            int row=0, col=i;     // current column
            while(1){
                
                // New column in the next row we will transition into. 
                //Here we can leverage the column value itself. 
                //if it is 1 we will move to next column, 
                //if it is -1 we will move to peviouis column
                int newcol = grid[row][col]+col;
                
                // we can only move to next row if there is no v shape in the current row, check current + newcol value for the current row
                // If there is no blockage move to next row
                if(0<=newcol && n>newcol && grid[row][col]==grid[row][newcol]){
                    row++;
                    col=newcol;
                } else{                    
                    // There is a blocakage , break
                    v[i]=-1;
                    break;
                }
                if(row>=m){
                    // we reached out of the last row
                    v[i]=col;
                    break;
                }
            }
        }
        return v;
    }