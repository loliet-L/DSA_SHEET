/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        if(m==0) return {};
        int x=0,y=0;
        int X=m-1,Y=n-1;
        vector<int> ans;
        while(x<=X && y<=Y){
            
            for(int j=y;j<=Y;j++){
                ans.push_back(mat[x][j]);
            }
            x++;
            
            for(int i=x;i<=X;i++){
                ans.push_back(mat[i][Y]);
            }
            Y--;
            if(x>X)
                break;
            for(int j=Y;j>=y;j--){
                ans.push_back(mat[X][j]);
            }
            X--;
            if(y>Y)
                break;
            for(int i=X;i>=x;i--){
                ans.push_back(mat[i][y]);
            }
            y++;
        }
        
        return ans;
}
