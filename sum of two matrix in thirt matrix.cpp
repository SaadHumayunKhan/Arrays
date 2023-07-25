#include<stdio.h>
#define rows 2
#define cols 2
void input(int a[rows][cols])
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&a[i][j]);
	}
}
void sum(int a[rows][cols],int b[rows][cols],int c[rows][cols])
{
		for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		c[i][j]=a[i][j]+b[i][j];
	}	
}
void print(int a[rows][cols])
{
for(int i=0;i<rows;i++)
	{
		{
			for(int j=0;j<cols;j++)
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[rows][cols];
	int b[rows][cols];
	int c[rows][cols];
	printf("enter first matrix elements:\n"); input(a);
	printf("enter second matrix elements:\n"); input(b);
	printf("sum of matrix elements:\n");
	sum(a,b,c);
	print(c);	
}
