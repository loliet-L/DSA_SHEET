#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array.
*/

int smallest(vector<int> arr)
{
    if(arr.size()>=1)
    {sort(arr.begin(),arr.end());//sort in ascending order
    return arr[0];}
    else{
        return -1;
    }
}

/*
Problem Statement: Given an array, we have to find the largest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 
*/
int largest(vector<int> arr)
{
    if(arr.size()>=1)
    {sort(arr.begin(),arr.end(),greater<int>());//sort in descending order
    return arr[0];}
    else{
        return -1;
    }
}

/*
Problem Statement: Given an array, find the second smallest and second largest element in the array. 
Print ‘-1’ in the event that either of them doesn’t exist.

Examples:

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
*/
void second(vector<int> arr)
{
    if(arr.size()>1)
    {
        int small = INT_MAX;
        int second_small = INT_MAX;
        int large=INT_MIN;
        int second_large=INT_MIN;
        for( int i=0;i<arr.size();i++)
        {
            if(arr[i]<small){
                small=arr[i];
            }
            else if(arr[i]<second_small && arr[i]!=small)
            {
                second_small=arr[i];
            }
            if(arr[i]>large){
                large=arr[i];
            }
            else if(arr[i]>second_large && arr[i]!=large)
            {
                second_large=arr[i];
            }
        }
     cout<<"Second Smallest : "<<second_small<<endl;
     cout<<"Second Largest : "<<second_large<<endl;
    }
    else{
        cout<<"Second Smallest : -1"<<endl;
     cout<<"Second Largest : -1"<<endl;
    }
}
/*
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position,
 the second element occupies the fourth position and so on.
*/

void reverseA(vector<int> &arr,int N)
{
    int mid;
    if(N%2==0)
    {
        mid=N/2;
    }
    else{
        mid=N%2+1;
    }
    for( int i =0;i<mid;i++)
    {
        int temp=arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=temp;
    }
//     int p1 = 0, p2 = n - 1;
//    while (p1 < p2) {
//       swap(arr[p1], arr[p2]);
//       p1++; p2--;
//    }
    
    // reverse(arr.begin(),arr.end());

}

/*
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	 5  2
        15  1
*/

void countFrequency(vector<int> arr)
{
    map<int,int> m;
    for( int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(auto i : m)
    {
        cout<< i.first<<" "<<i.second<<endl;
    }

}
/*
Problem Statement: Rearrange the array such that the first half is arranged in increasing order, 
and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.
*/
void rearranage(vector<int> &arr)
{
    int n=arr.size();
    
    sort(arr.begin(),arr.end());
        int p1 = n/2, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
    for( auto i : arr)
    {
        cout<<i<<" ";
    }
}
/*
Problem Statement: Given an array, we have to find the sum of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15
*/
int sumOfArray(int arr[],int n)
{
    int sum=0;
    for(int i =0 ;i < n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

/*
In this article we will learn a very popular algorithm for “Rotate array by K elements : Block Swap Algorithm”.

Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.
*/
void reverseArray( int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++,end--;
    }
}
void rotateArray(int arr[],int k,int n)
{
    reverseArray(arr,0,k-1); //reversing first 2 elements
    reverseArray(arr,k,n-1); // reversing the rest of the array
    reverseArray(arr,0,n-1); // reversing the whole array
    for( int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
/*
Problem Statement: Given an unsorted array, find the median of the given array.

Examples:

Example 1:
Input: [2,4,1,3,5]
Output: 3
*/
void Median(int arr[],int n)
{
    sort(arr,arr+n);
    if(n%2==0)
    {
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else
    {
        cout<<arr[(n/2)];
    }
}
/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such
that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold 
the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Examples:

Example 1: 

Input: arr[1,1,2,2,2,3,3]

Output: arr[1,2,3,_,_,_,_]
*/

int RemoveDulpicateInSortedArray(int arr[],int n)
{
    int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

/*
Problem Statement: Given an unsorted array, remove duplicates from the array.

Examples:

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements
*/

vector<int> removeDuplicates(vector<int> &arr)
{
    vector<int>ans;
    map<int, int>mp ;
        for (int i = 0; i < arr.size(); i++) {
                mp[arr[i]]++;
            if(mp[arr[i]]==1)
            {
                ans.push_back(arr[i]);
            }
        }
        arr=ans;
    return arr;
}
/*
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning,
end, and at a specific position.

Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
*/
void insertatbegin(int* arr,int n,int value)
{
    for( int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}
void insertatend(int* arr,int n,int value)
{
    arr[n]=value;
}
void insertatpos(int* arr,int n,int pos,int value)
{
    for( int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
}


/*
Problem Statement: Find all the repeating elements present in an array.

Examples:

Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
*/
void repeatingElements(vector<int> arr)
{
    // vector<int> ans;
    map<int,int> m;
    for(auto i:arr)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        if(i.second>1)
        {
            cout<<i.first<<" ";
        }
    }
    // return ans;
}
/*
Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.

Examples:

Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
*/
void NonrepeatingElements(vector<int> arr)
{
    map<int,int> m;
    for(auto i:arr)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        if(i.second==1)
        {
            cout<<i.first<<" ";
        }
    }
}

/*
Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

Examples:

Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
*/
vector<vector<int>> symmetricPairs(vector<vector<int>> arr)
{
    map<int,int> mp;
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
		int first = arr[i][0];
		int second = arr[i][1];
		
		//if {second,first} existed previously,print them.
		if (mp.find(second) != mp.end() && mp[second] == first) {
			ans.push_back({first,second});
		}
		//else store them in the map
		else {
			mp[first] = second;
		}
	}
    return ans;
}

/*
Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

Examples:

Example 1:
Input:
 Nums = [1,2,3,4,5,0]
Output:
 120
Explanation:
 In the given array, we can see 1×2×3×4×5 gives maximum product value.
*/

int MaximumProductSubarray(vector<int> arr)
{
    int max_product=1,curr_product=1;
    for(int i=0;i<arr.size();i++)
    {
        curr_product*=arr[i];
        if(curr_product==0 || (curr_product<0 && arr[i+1]>=0))
        {
            curr_product=1;
        }
        else{
            max_product=max(max_product,curr_product);
        }
    }
    return max_product;
}

/*
Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.

Examples:

Example 1:
Input: 20 15 26 2 98 6  //2 6 15 20 26 98
Output: 4 3 5 1 6 2
*/

vector<int> ReplaceRank(vector<int> &arr)
{
    vector<int> temp=arr;
    map<int,int> m;
    sort(temp.begin(),temp.end());
    for( int i=0;i<arr.size();i++)
    {
        m[temp[i]]=i+1;
    }
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=m[arr[i]];
    }
    return arr;
    
}

/*
Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.

Examples:

Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and 
then ‘3’ 2 times and 4 has least frequency, it will be printed at last.
*/

bool sortele(pair<int, int> a, pair<int, int> b)
{
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
}
void Sortelementsbyfreq(int arr[], int n)
{
  unordered_map<int, int> map;
  for (int i = 0; i < n; i++)
  {
    map[arr[i]]++;
  }
  vector<pair<int, int>> vec;
  for (auto it = map.begin(); it != map.end(); it++)
  {
    vec.push_back({it->first, it->second});
  }
  sort(vec.begin(), vec.end(), sortele);
  for (int i = 0; i < vec.size(); i++)
  {
    while (vec[i].second > 0)
    {
      cout << vec[i].first << " ";
      vec[i].second--;
    }
  }
  cout << endl;
}

/*
Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right   
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .
Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left   8 7 3 11 10 9
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.
*/
 
//  <------already defined above on line no 210--------->

// void reverseArray( int arr[],int start,int end)
// {
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++,end--;
//     }
// }


void Rotate(int a[],int N,int k, string direction)
{
    
    if(direction=="right")
    {
        //example 1 2 3 4 5 6 k=2
        //reversing from start till N-k elements
        //  4 3 2 1 5 6
     reverseArray(a,0,N-k-1);
     //reversing whole array
    //   6 5 1 2 3 4
     reverseArray(a,0,N-1);

    }
    else if(direction=="left")
    {
        // exmaple 1 2 3 4 5 6 k=2
        // reversing the first k elements
        //  2 1 3 4 5 6
        reverseArray(a,0,k-1);
        // reversing the rest of the array i.e from k till end
        //  2 1 6 5 4 3
        reverseArray(a,k,N-1);
        // reversing the whole array
        //  3 4 5 6 1 2
        reverseArray(a,0,N-1);


    }
    else{
        cout<<"please enter a valid direction!";
    }

}

/*
Problem Statement: Finding Equilibrium index in an array

Given a 0-indexed integer array nums, find the leftmost equilibrium Index.

An equilibrium Index is an index at which sum of elements on its left is equal to the sum of element on its right. 
That is, nums[0] + nums[1] + … + nums[equilibriumIndex-1] == nums[equilibriumIndex+1] + 
nums[equilibriumIndex+2] + … + nums[nums.length-1]. If equilibriumIndex == 0, the left side sum is considered to be 0. 
Similarly, if equilibriumIndex == nums.length – 1, the right side sum is considered to be 0.

Return the leftmost equilibrium Index that satisfies the condition, or -1 if there is no such index.

Examples:

Example 1:
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4
*/

int Equilibrium(int arr[],int n)
{
    int leftSum=0;
    int rightSum=sumOfArray(arr,n);//16
    for(int i=0;i<n;i++)
    {
        rightSum-=arr[i];
        if(leftSum==rightSum)
        {
            return i;
        }
        else{
            leftSum+=arr[i];
        }
    }
    return -1;
}


/*
Write a program to find whether an array is a subset of another array or not.

Given arr1[] and arr2[], we need to find whether arr1[] is a subset of arr2[]. 
An array is called a subset of another if all of its elements are present in the other array.

Note: Array elements are assumed to be unique.

Examples:

Example 1:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [2,4,3,1,7,5,15]
Output: arr1[] is a subset of arr2[]
*/

bool isSubset(int arr1[], int m, int arr2[], int n){
    
    if(m>n) return false;
    unordered_map<int,bool> mp;
    for(int i=0; i<n; i++){
        mp[arr2[i]] = true;
	}
	for(int j=0;j<m;j++){
	    if(mp.count(arr1[j])==0){
	        return false;
	    }
	}
	return true;
}





int main()
{
    vector<int> arr1 = {7,7,1,2,4,7,7,5,1,4};
    vector<int> arr2 = {2,4,1,3,5,6};
    vector<int> arr = {10,5,10,15,10,5};
    int array[]={1,2,3,4,5,6};
    vector<vector<int>> ary= {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
   
    // cout<<"The smallest element in the array is: "<<smallest(arr1)<<endl;
    // cout<<"The greatest element in the array is: "<<largest(arr2)<<endl;

    // second(arr1);

    // reverseA(arr2,5);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr2[i]<<" ";
    // }

    // countFrequency(arr);

    // rearranage(arr2);

    // rotateArray(array,2,5);

    // Median(array,6);

    // removeDuplicates(arr1);
    // for(auto i:arr1)
    // {
    //     cout<<i<<" ";
    // }

    // for(auto i:array)
    // cout<<i<<" ";
    // cout<<endl;

    // insertatbegin(array,6,0);
    // insertatend(array,7,7);
    // insertatpos(array,8,3,9);
    // for(int i=0;i<9;i++)
    // cout<<array[i]<<" ";

    // repeatingElements(arr1);

    // NonrepeatingElements(arr1);

    // vector<vector<int>> v=symmetricPairs(ary);
    // for(auto i:v)
    // {
    //     cout<<"("<<i[0]<<" "<<i[1]<<") ";
    // }

    // vector<int> ar3={1,2,-3,0,-4,-5};
    // cout<<MaximumProductSubarray(ar3);

    // vector<int> a={20 ,15 ,26 ,2 ,98 ,6};
    // ReplaceRank(a);
    // for(auto i:a)
    // cout<<i<<" ";

    // int v[]={1,2,3,2,4,3,1,2};
    // Sortelementsbyfreq(v,8);

    // int a1[] = {1,2,3,4,5,6,7};
    // int a2[] = {1,2,3,4,5,6,7};
    // int k=2 ,N=7;
    // string d1= "right",d2="left"; 
    // for(auto i: a1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"after right rotation"<<endl;
    // Rotate(a1,N,k,d1);
    // for(auto i:a1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"after left rotation"<<endl;
    // Rotate(a2,N,k,d2);
    // for(auto i:a2)
    // {
    //     cout<<i<<" ";
    // }


    // int nums[] = {2,3,-1,8,4};
    // cout<<Equilibrium(nums,5);


    // int arr1[]={1,3,4,5,2};
	// int arr2[]={2,4,3,1,7,5,15};
	
	// int m= sizeof(arr1)/sizeof(arr1[0]);
	// int n= sizeof(arr2)/sizeof(arr2[0]);
	
	// bool ans= isSubset(arr1,m,arr2,n);
	
	// if(ans==true)
	//     cout<<"arr1[] is a subset of arr2[]";
	// else cout<<"arr1[] is not a subset of arr2[]";



















    return 0;
}