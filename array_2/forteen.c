#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum += a[i][n - i - 1];
    }

    printf("Anti diagonal sum = %d", sum);

    return 0;
}

