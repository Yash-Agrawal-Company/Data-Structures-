#include<stdio.h>
int main(){
    int r1,c1,r2,c2,d;
    printf("Enter the no. of rows of first matrix -> ");
    scanf("%d",&r1);
    printf("Enter the no. of columns of first matrix -> ");
    scanf("%d",&c1);
    int mat1[r1][c1];
    printf("Enter the elements of first matrix -: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
        
    }
    
    printf("Enter the no. of rows of first matrix -> ");
    scanf("%d",&r2);
    printf("Enter the no. of columns of first matrix -> ");
    scanf("%d",&c2);
    int mat2[r2][c2];
    printf("Enter the elements of first matrix -: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        
    }
    int result[r1][c2];
    printf("The resultant matrix is -: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            d = 0;
            for (int k = 0; k < c1; k++)
            {
                d += mat1[i][k]*mat2[k][j];
            }
            result[i][j] = d;
            printf("%d  ",result[i][j]);
        }
        printf("\n");
        
    }
    return 0;

}