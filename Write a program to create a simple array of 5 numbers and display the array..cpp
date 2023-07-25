//1.Write a program to create a simple array of 5 numbers and display the array.
#include<stdio.h>
void input(int a[],int n)
{
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int main()
{
	int n=5;
	int a[5];
	printf("enter the array:\n");
	input(a,n);
}
