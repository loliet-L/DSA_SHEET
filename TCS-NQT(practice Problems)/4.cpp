/*
Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

Note : 1st element of the array should be considered in the count of the result.

For example,
Arr[]={7,4,8,2,9}
As 7 is the first element, it will consider in the result.
8 and 9 are also the elements that are greater than all of its previous elements.
Since total of  3 elements is present in the array that meets the condition.
Hence the output = 3
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[]={7,4,8,2,9,2,3,12};
    int ct=0;
    int m=0;
    for( int i=0;i<8;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
            ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}