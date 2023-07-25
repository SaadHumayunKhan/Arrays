//5.Write a program to ask user to enter 5 numbers in a array, and find the index of maximum value in array
//a.Arr = [2,7,9,3,6]: Answer: 2 (9 exist on index 2)
#include<stdio.h>
void input_arr(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);	
	}
}
int find_max_index(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		return i;
    }
	
}
int main()
{
	printf("enter the array limit<=5:\n");
	int n=5; int arr[n];
	input_arr(arr,n);
	int res=find_max_index(arr,n);
	printf("index of max value is %d:",res);
	
	
}
