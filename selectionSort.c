#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{   
    int n; int temp;
    int min;
    printf("Enter the size of the array -> ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array -> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Inputting elements in the array
    }
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j; // Storing the smallest element of the array in the variable min
            }
        }
        // swaping the elements from starting of the arrray to the minimum element
        
        swap(&arr[i],&arr[min]);
        
    }
        printf("Printing the sorted array -> ");
        for (int i = 0; i < n; i++)
        {
            printf("%d  ", arr[i]);
        }
        return 0;
}