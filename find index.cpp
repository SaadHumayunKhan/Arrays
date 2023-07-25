#include<stdio.h>
arr_input(int a[], int n)
{
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}

int find_index(int a[],int n, int t)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==t)
		return i;
	}
	return -1;
}
int main()
{
    printf("enter the target:"); int target; scanf("%d",&target);
	printf("enter array limit:"); int n; scanf("%d",&n);
	int arr[n];
	arr_input(arr,n);
	
	int res=find_index(arr,n,target);
	if(res!=-1)
	printf("the index of target=%d is %d",target,res);
	else
	printf("the index of target=%d is not found",target);
	
}
