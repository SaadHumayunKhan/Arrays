#include<stdio.h>
/**********************************/
void input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);	
	}
}
/**********************************/
int reverse(int a[],int n)
{
	int start=0;
	int end=n-1;
	while(start<end)
	{
		int t=a[start];
		a[start]=a[end];
		a[end]=t;
		start++;
		end--;
	}
}
/**********************************/
void print(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   printf("%d ",a[i]);	
	}
}
/**********************************/
int main()
{
	printf("enter array limit:");
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	printf("orignal array:\n");
	print(arr,n);
	reverse(arr,n);
	printf("\nreverse array:\n");
	print(arr,n);
}
