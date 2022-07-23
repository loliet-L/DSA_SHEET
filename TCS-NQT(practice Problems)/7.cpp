/*
At a fun fair, a street vendor is selling different colours of balloons. 
He sells N number of different colours of balloons (B[]). 
The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array 
which is present odd number of times is displayed. The colours of the balloons can all be either 
upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
*/

#include<iostream>
#include<vector>
#include<string>
#include <unordered_map>  
#include <utility> 
#include <algorithm> //FOR SORTING
using namespace std;

int main()
{
    char B[7]={'r','g','b','b','g','y','y'};
    int N = 7;
    unordered_map<char,int> map;
    for( int i =0 ; i<N;i++)
    {
        if(!map[B[i]])
        {
            map[B[i]]=1;
        }
        else{
            map[B[i]]++;
        }
    }
    
    




    return 0;
}