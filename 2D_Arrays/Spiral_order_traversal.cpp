#include<iostream>


int main()
{
	int row,col;
	cin >> row >> col ;
	int arr[row][col];
	for ( int i =0; i<row;i++)
	{
		for ( int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int row_start=0,row_end=row-1;
	int col_start=0,col_end=col-1;
//	spiral order traversal


    while(row_start<=row_end && col_start<=col_end)
    {
    	//for start row
    	for ( int col=col_start;col<col_end;col++)
    	{
    		cout<<arr[row_start][col];
		}
		row_start++;
		//for end col
		for (int row=row_start;row<row_end;row++)
		{
			cout<<arr[row][col_end];
		}
		col_end--;
		//for end row
		for ( int col=col_end;col>=col_start;col--)
		{
			cout<<arr[row_end][col];
		}
		row_end--;
		//for start col
		for ( int row=row_end;row>=row_start;row--)
		{
			cout<<arr[row][col_start];
		}
	}

	
	
	return 0;
}
