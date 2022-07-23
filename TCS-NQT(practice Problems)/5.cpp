/*
A parking lot in a mall has RxC number of parking spaces. Each parking space will either be  empty(0) or full(1). 
The status (0/1) of a parking space is represented as the element of the matrix. 
The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).

Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.

Example 1:
Input :
3   -> Value of R(row)
3    -> value of C(column)
[0 1 0 1 1 0 1 1 1] -> Elements of the array M[R][C] where each element is separated by new line.
Output :
3  -> Row 3 has maximum number of 1’s
0 1 0 1 1 0 1 0 1 1 1 1
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[4][3]={{0,1,0},{1,1,0},{1,0,1},{1,1,1}};
    int currrowcount=0,maxrowcount=0;
    int ans;

    for( int i=0;i<4;i++)
    {
        for( int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                currrowcount++;
            }
            
        }
        if(currrowcount>maxrowcount)
        {
            maxrowcount=currrowcount;
            ans=i+1;
        }


    }
    cout<<ans;

    

    return 0;
}