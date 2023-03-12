#include<stdio.h>
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int n,i,j;
	
	printf("Specify the size of array -> "); // Taking the size of array
	scanf("%d",&n);
	int arr[n];
	// inputing the elements of array 
	printf("Enter the elements of array -> ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	// sorting the array using bubble sort in descending order 
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
		
	}
//	printing the first element of the sorted array
	printf("The greater element in the array is -> %d",arr[0]);
	return 0;
}
