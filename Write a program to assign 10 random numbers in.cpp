/*6.Write a program to assign 10 random numbers in an array and then ask user to enter a number to find whether that number exists in the array or not using functions. (search number in the array). Display index of the number of found else display -1.
a.Arr = [2,7,9,3,6]: Input = 7. Answer: 1
b.Input = 5: Answer = -1*/
#include<stdio.h>
int main()
{   printf("enter a target:"); int t; scanf("%d",&t);
	printf("enter 10 numbers:");
	int n=4; int arr[n];
	for(int i=0;i<n;i++)
	{scanf("%d",&arr[i]);}
	
	for(int i=0;i<n;i++)
	
		{
		if(arr[i]==t)
		printf("1");
	    }
		if(arr[i]!=t)
		printf("-1");
	
}
