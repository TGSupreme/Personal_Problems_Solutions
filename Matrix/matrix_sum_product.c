#include <stdio.h>

int main()
{
    // Sum And Product of elements of matrix.

    int row, col, sum = 0, prod = 1;

    printf("Enter The number Of Rows : ");
    scanf("%d", &row);

    printf("Enter The number Of Colunms : ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter The Element [%d,%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            prod *= matrix[i][j];
        }
    }

    printf("\n\nYour Matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum = %d", sum);
    printf("\nProduct = %d", prod);

    return 0;
}