//Write a program to find sum of all odd numbers in the array.a.Arr = [2,7,9,3,6]: Answer: 19
#include<stdio.h>
void input(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int sum_odd_array(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int a; printf("enter array limit:"); scanf("%d",&a);
	int arr[a];
	input(arr,a);
	int res=sum_odd_array(arr,a);
	printf("sum of odd number in arrays is %d",res);
}
