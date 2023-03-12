#include<stdio.h>
int main(){
    int n,pos,extra,position;
    printf("Enter the size of array -> ");
    scanf("%d",&n);             // taking the size of array 
    int arr[n];
    printf("Enter elements -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); // inputting array's elements 
    }
    printf("Enter the value of element to be inserted -> ");
    scanf("%d",&extra);
    // 
    for (int i = 0; i < n; i++)
    {
        if (extra<arr[i])
        {
            position = i;
            break;
        }
        
    }
    n = n+1;
    for (int i = n-1; i >= position ; i--)
    {
        arr[i] = arr[i-1];
    }
        arr[position] = extra;
    
    printf("Printing the array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

}