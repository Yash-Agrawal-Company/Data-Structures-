#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    do
    {
        while (arr[i]<= pivot)
        {
            i++;
        }
        while (arr[j]> pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i],&arr[j]);
        }   
    } while (i < j);
    
    swap(&arr[j],&arr[low]);
    return j; // The index to be given to the quickSort function 
}
void quickSort(int arr[],int low,int high){
    if(low<high){
    int indexElement = partition(arr,low,high);
    quickSort(arr,low,indexElement-1); // This will perform quickSort on the left subArray
    quickSort(arr,indexElement+1,high);   // This will perform quickSort on the right subArray
    }
}
int main(){
    int n;
    printf("Enter the size of the array -> ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the aray -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int low = 0,high = n-1;
    quickSort(arr,low,high);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    
}