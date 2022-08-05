/*
Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. 
The converted array should be in form a < b > c < d > e < f. 
The relative order of elements is same in the output i.e you have to iterate on the original array only.

Example 1:

Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
*/
#include<bits/stdc++.h>
using namespace std;

void zigZag(int arr[], int n) {
	     for(int i=0;i<n-1;i++)
       {
           if(i%2==0)
           {
               if(arr[i]>arr[i+1])
               {
                   int temp;
                   temp=arr[i];
                   arr[i]=arr[i+1];
                   arr[i+1]=temp;
               }
           }
           else
           {
               if(arr[i]<arr[i+1])
               {
                   int temp;
                   temp=arr[i];
                   arr[i]=arr[i+1];
                   arr[i+1]=temp;
               }
           }
       }
	}
    