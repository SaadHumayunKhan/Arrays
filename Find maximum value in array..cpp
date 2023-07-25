/*3.Write a program to ask user to enter 5 numbers in a array, and find the maximum value in array
Arr = [2,7,9,3,6]: Answer: 9*/
#include<stdio.h>
void input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);	
	}
}
int arr_max(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int main()
{
    printf("enter array limit:");
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	int max=arr_max(arr,n);
	printf("Maximum value in array = %d",max);
}
