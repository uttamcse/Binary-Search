#include<iostream>
using namespace std;

bs(int arr[],int size,int num,int left,int right)
{
	while(left<=right)
	{
	int mid =left+(right-left)/2;
	
	if(arr[mid]==num)
	{
		return mid;
	}
	else if(arr[mid]<num)
	{
		left=mid+1;
	}
	else
	{
	right=mid-1;	
	}
	}
	return -1;
}
int main()
{
	int size;
	cout<<"enter the size of array : ";
	cin>>size;
	
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int num,output;
	cout<<"enter the num : ";
	cin>>num;
	
	output=bs(arr,size,num,0,size-1);
	
	if(output==-1)
	{
		cout<<"value not found ";
	}
	else{
		cout<<"value found at position "<<output+1;
	}
	
	
	return 0;
}
