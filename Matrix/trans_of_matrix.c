#include <stdio.h>

int main(){

    int row,col;

    printf("Enter The Number Of Rows : ");
    scanf("%d",&row);

    printf("Enter The Number Of column : ");
    scanf("%d",&col);

    int matrix[row][col];

    for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            printf("Enter The Value Of Element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
         }
    }

    printf("\n\nYour Matrix : ");

    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               printf("%d ",matrix[i][j]);
               
            }
        printf("\n");
       }

    return 0;
}