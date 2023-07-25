#include<stdio.h>
input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);	
	}
}
int arr_sum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum += a[i];
	}
	return sum;
}
int arr_min(int a[],int n)
{
	int min;
	min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
}
int main()
{
	printf("enter array limit:");
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	int sum=arr_sum(arr,n);
	printf("SUM of array = %d",sum);
	int min=arr_min(arr,n);
	printf("\nSMALLEST no in array = %d",min);
}
