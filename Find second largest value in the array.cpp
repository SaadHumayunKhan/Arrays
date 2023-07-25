/*Write a program to ask user to enter 5 numbers in an array, and find the second largest value in array
Arr = [2,7,9,3,6]: Answer: 7*/
#include <stdio.h>
void input(int a[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
}
int find_second_largest(int a[], int n)
{
    int max = a[0];
    int secondMax = a[0];

    for (int i = 1; i < n; i++) 
	{
        if (a[i] > max) 
		{
            secondMax = max;
            max = a[i];
        } else if (a[i] > secondMax && a[i] != max) 
		{
            secondMax = a[i];
        }
    }

    return secondMax;
}
int main() 
{
    printf("Enter array limit: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    
    input(arr, n);
    int res = find_second_largest(arr, n);
    printf("Second largest value in the array: %d\n", res);

}
