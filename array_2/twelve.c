#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(j = 0; j < c; j++)
    {
        int sum = 0;
        for(i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}

