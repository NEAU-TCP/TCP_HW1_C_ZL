#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int H = (n+1)/2;

    for (int i=1; i <= H; i++)
    {
        for (int j=1; j <= H-i; j++)
        {
            printf(" ");
        }

        for (int j=1; j <= 2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i= n/2; i >= 1; i--)
    {
        for (int j=1; j <= H-i; j++)
        {
            printf(" ");
        }

        for (int j=1; j <= 2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
