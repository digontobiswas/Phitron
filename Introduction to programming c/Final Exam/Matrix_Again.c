#include <stdio.h>
int main()
{

    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", &ar[i][j]);
        }
    }
    
    int expected_row = row-1;
    int expected_col = col-1;
    for (int j = 0; j < col; j++)
    {
        printf("%d ", ar[expected_row][j]);
    }
    printf("\n");

     for (int j = 0; j < row; j++)
    {
        printf("%d ", ar[j][expected_col]);
    }
}