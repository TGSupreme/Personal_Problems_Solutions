#include <stdio.h>

int main()
{
    // Sum Of Each Rows.

    int row, col,i,j;

    printf("Enter The number Of Rows : ");
    scanf("%d", &row);

    printf("Enter The number Of Colunms : ");
    scanf("%d", &col);

    int matrix[row][col], sum[row];

    printf("\n\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("Enter The Element [%d,%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            sum[i] += matrix[i][j];
            // if(i==0){
            //     sum1 += matrix[i][j];
            // }
            // if(i==1){
            //     sum2 += matrix[i][j];
            // }
            // if(i==2){
            //     sum3 += matrix[i][j];
        }
    }


printf("\n\nYour Matrix \n");

for (i = 0; i < row; i++)
{
    for (j = 0; j < col; j++)
    {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}

for (i = 0; i < row; i++)
{
    printf("\nSum Of Row [%d] = %d", i + 1, sum[i]);
}
// printf("\nSum Of Row 1 = %d", sum1);
// printf("\nSum Of Row 2 = %d", sum2);
// printf("\nSum Of Row 3 = %d", sum3);

return 0;
}