/*Write a program to ask user to enter 5 numbers in a array, and find the index of maximum value in array
a.Arr = [2,7,9,3,6]: Answer: 2 (9 exist on index 2)*/
#include<stdio.h>
void input(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int max_array(int arr[],int n)
{
	int max=arr[0];
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		index=i;
	}
	return index;
}
int main()
{
	int a; printf("enter array limit:"); scanf("%d",&a);
	int arr[a];
	input(arr,a);
	int res=max_array(arr,a);
	printf("max=%d",res);
}
