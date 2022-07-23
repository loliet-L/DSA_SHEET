/*
 1,2,3
 4,5,6
 7,8,9
 we're counting the no of paths to reach goal state from a start state 
 for eq our start state is 1 and our goal state is 9
 so  no of paths to reach 1 to 9 will be 6
 given the condition we can only move in right and downward direction

*/
#include<iostream>
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

int main()
{
    cout<<couthPathMaze(6,0,0);
    return 0;
}