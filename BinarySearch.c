#include<stdio.h>
int BinarySearch(int arr[],int begin,int end,int find){
	end = end-1; // Array index starts from zero 
	
	int mid = (begin+end)/2;
	if(begin==end){
		return mid;
	}
	else if(arr[mid]==find){
		return mid;
	}
	else if(arr[mid]>find){ // if element to find is smaller than the middle element 
	// it must be at left side of the array :) 
		return BinarySearch(arr,begin,mid-1,find);
	}
	else{ // if element to find is greater than the middle element 
	// it must be at right side of the aray :)
		return BinarySearch(arr,mid+1,end,find);
	}
	return -1; // if any case does'nt matched with the desired value , it will be returned 
}
int main()
{
	int n,i,j;
	printf("Enter the size of array -> ");
	scanf("%d",&n); // Taking the size of array 
	int arr[n];
	printf("Enter the elements of array -> ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]); //Inputting the elements in the array 
	}
	int f; // Item to be found
	printf("Which element you want to find -> ");
	scanf("%d",&f);
	int v;
	printf("From which position , you want to start the search -> ");
	scanf("%d",&v);  // index to start to start the search  
	int output = BinarySearch(arr,v,n,f); // Calling the method 
	if(output == -1){
		printf("Element you want to find is not present in the array :(");
	}
	else{
		printf("The element is present at %d index of array ",output);
	}
}
