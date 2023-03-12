#include<stdio.h>
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int n,i,j;
	int examiner = 0;
	printf("Specify the size of array -> "); // Taking the size of array
	scanf("%d",&n);
	int arr[n];
	// inputing the elements of array 
	printf("Enter the elements of array -> ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	int min = arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min)
		{
			min = arr[i];
		}
		
	}
	printf("The Smaller element is -> %d ",min);
	
	
	return 0;
}
