#include<stdio.h>
int main(){
    int n,pos,value;
    printf("Enter the size of array -> ");
    scanf("%d",&n);             // taking the size of array 
    int arr[n];
    printf("Enter elements -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); // inputting array's elements 
    }
    printf("Enter the index of the array -> ");
    scanf("%d",&pos);
    printf("Enter the value of the element -> ");
    scanf("%d",&value);
    n = n+1;
    
    for (int i = n-1; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;

    printf("Printing the array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}