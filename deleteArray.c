#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the size of array -> ");
    scanf("%d",&n);             // taking the size of array 
    int arr[n];
    printf("Enter elements -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); // inputting array's elements 
    }
    printf("Enter the index of the element to be deleted -> ");
    scanf("%d",&pos);

    
    
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i+1];
        
    }
    n = n-1;
    for (int i = 0; i < n; i++)
    {
       printf("%d  ",arr[i]); 
    }
    

    
}