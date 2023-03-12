#include<stdio.h>
int main(){
    int n,value;
    int count=0;
    printf("Enter the size of array -> ");
    scanf("%d",&n);             // taking the size of array 
    int arr[n];
    printf("Enter elements -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); // inputting array's elements 
    }
    
    printf("Enter the value of the element -> ");
    scanf("%d",&value);
     
    for (int i = 0; i < n; i++)
    {
        if (value==arr[i])
        {
            printf("item is at index %d\n",i);
        }
        else{
            count++;
        }
        
    }
    if(count==n){
        printf("Item is not present in the array ");
    }
    
}