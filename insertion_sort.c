#include<stdio.h>
int main(){
    int n,j,key;
    printf("Enter the size of the array -> ");
    scanf("%d",&n);
    printf("Enter the elements of the array -> ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // performing sorting here 
    for (int i = 1; i < n; i++)    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
    printf("Printing the sorted array -> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}