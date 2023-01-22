#include <stdio.h>

int main()
{

    int row, col;

    printf("Enter The Number Of Rows: ");
    scanf("%d", &row);

    printf("Enter The Number Of Collums: ");
    scanf("%d", &col);

    printf("\n\n");

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter The Element [%d,%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n\n");
    printf("Your Matrix Is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d |", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}