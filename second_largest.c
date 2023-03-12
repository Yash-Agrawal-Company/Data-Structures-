
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int n,i,j;
    printf("Enter the size of array -> ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements -> ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    // performing sorting here by using bubble sort 
    for( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
           if (arr[j]<arr[j+1])
           {
            swap(&arr[j],&arr[j+1]);
           }
           
        }
        
    }
    printf("The second largest element is %d",arr[1]);
    
}