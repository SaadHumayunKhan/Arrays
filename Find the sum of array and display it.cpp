/*Write a program to sum all numbers of an array and display the sum 
a.Arr = [2,7,9,3,6]: Answer: 27*/
#include<stdio.h>
void input(int a[], int n)
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
int main()
{
	printf("enter array limit:");
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	int sum=arr_sum(arr,n);
	printf("SUM of array = %d",sum);
}
