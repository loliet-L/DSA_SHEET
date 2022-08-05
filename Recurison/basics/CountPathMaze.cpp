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

/*
Jack always visits a pond which is N * M units in dimensions. 
Every morning there is a fish (shown as * in the below image) which stays on
the left corner of the other side, comes to right corner of the opposite side where jack feeds him some food.
The fish can move only in "forward" and "right" direction, just 1 unit.
One day Jack observed that right part of other side of pond is filled with sand. 
The filled part is in rectangular shape A*B(A<N and B<M).
Now you have to find out in how many ways fish can reach to jack.

Input given by user N, M, A, B
Output: Number of different ways in which the fish can reach Jack
Example 1: Input: 2211 --> Input Integer, N, M, A, B. Output: 5
Output Explanation: Below figure shows the number of combinations, in which the fish can reach Jack


*/
// <-------wrong solution----------->
// int couthPathSandWater(int i,int j,int a,int b)
// {
//     if(i==0 && j==0)
//     {
//         return 1;
//     }
//     if((i<a && j<b) || i<0 || j<0)
//     {
//         return 0;
//     }
//     return couthPathSandWater(i-1,j,a,b)+couthPathSandWater(i,j+1,a,b);
// }

int main()
{
    cout<<couthPathMaze(6,0,0);
    // cout<<couthPathSandWater(3,3,1,1);
    return 0;
}