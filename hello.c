#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array -> ");
    scanf("%d",&n);
    int *ptr = (int*) malloc(n*sizeof(int)); // declaring of a array dynamically 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at positin %d -> ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The element at positin %d is %d\n ",i,ptr[i]);
    }
    
}