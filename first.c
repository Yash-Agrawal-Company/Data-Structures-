#include<stdio.h>
void swap(char *x,char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int n,i,j;
//	printf("Enter the numbers of terms -> ");
//	scanf("%d",&n);
//	char infix[n];
//	printf("Enter the expression in infix notation -> ");
//	scanf("%s",&infix);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(infix[j]=='+' || infix[j]=='-' || infix[j]=='*'|| infix[j]=='/'|| infix[j]=='^')
//			swap(&infix[i],&infix[j]);
//		}
//	}
//	printf("Your expression is -> %s",infix);
char arr[] = {'3','6','3','9','2','1'};
int y = sizeof(arr)/sizeof(arr[0]);
 arr[3] = NULL;
for(i=0;i<y;i++){
	printf("%c\t",arr[i]);
}
}
