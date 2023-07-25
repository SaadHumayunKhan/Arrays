//2.Write a program to create an array of 5 floats and display them
#include <stdio.h>
void input(float a[], int n) 
{
    for (int i=0;i<n;i++) 
    scanf("%f",&a[i]);  
}
int main() 
{
    int n = 5;
    float a[5];
    printf("Enter the array:\n");
    input(a,n);
}

