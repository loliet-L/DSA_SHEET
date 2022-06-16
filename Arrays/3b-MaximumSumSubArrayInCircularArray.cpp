#include<iostream>
#include<climits>

int kadanes(int ar[],int n)
{
	int currSum=0;
	int maxSum= INT_MIN;
	for ( int i =0; i<n;i++)
	{
		currSum+=ar[i];
		if(currSum<0)
		{
			currSum=0;
		}
		maxSum=max(currSum,maxSum);
	}
	return maxSum;
}

int main()
{
	int size;
	cin>>n;
	int arr[size];
	for ( int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int wrapedsum;
	int nonwrapsum;
	nonwrapsum=kadanes(arr,size);
	int totalsum=0;
	for ( int i =0 ; i<n;i++)
	{
		totalsum+=arr[i];
		arr[i]=-arr[i];
		
	}
	wrapedsum=totalsum+ kadanes(arr,size);
	cout<<max(wrapedsum,nonwrapedsum)<<endl;
	
	
	
	
	return 0;
}
