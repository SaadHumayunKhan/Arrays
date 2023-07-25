#include<stdio.h>
arr_input(int a[], int n)
{
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}

arr_sum(int a[], int b[], int c[], int n)
{
	for(int i=0;i<n;i++)
	c[i]=a[i]+b[i];
}

arr_print(int a[], int n)
{
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}

int main()
{
	printf("enter array limit:");
	int n;
	scanf("%d",&n);
	
	int a1[n], a2[n], a3[n];
	printf("enter array 1:\n");
	arr_input(a1,n);
	printf("enter array 2;\n");
	arr_input(a2,n);
	
	arr_sum(a1,a2,a3,n);
	printf("sum of both arrays is:\n");
	arr_print(a3,n);
	
}
