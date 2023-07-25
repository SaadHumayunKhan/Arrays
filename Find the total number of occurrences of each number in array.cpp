//Find the total number of occurrences of each number in array
#include<stdio.h>
void input(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);	
	}
}
int count_occurrence(int a[],int n)
{
	int count[n];
	for(int i=0;i<n;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	printf("................\n");
	for(int i=0;i<n;i++)
	{
		if(count[i]>0)
		printf("%d occurs %d times\n",i,count[i]);
	}
}
int main()
{
	printf("enter array limit:");
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	count_occurrence(arr,n);
}
