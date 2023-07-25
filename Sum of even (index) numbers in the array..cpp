/*Find sum of all numbers on even indexes of the array. 
a.Arr = [2,7,9,3,6]: Answer: 17 (2+9+6)*/
#include<stdio.h>
void input(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int sum_evenIndex_array(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int a; printf("enter array limit:"); scanf("%d",&a);
	int arr[a];
	input(arr,a);
	int res=sum_evenIndex_array(arr,a);
	printf("sum is %d",res);
}
