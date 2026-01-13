#include <stdio.h>

int main()
{
    int a, b, i, arr[100], n = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++)
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            arr[n++] = i;

    printf("The array is: ");
    for(i = 0; i < n; i++)
        printf("%d%s", arr[i], (i < n - 1) ? ", " : "");

    return 0;
}

