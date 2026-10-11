#include <stdio.h>

int Max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min) min = a[i];
    }
    return min;
}

int Average(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("max=%d\n", Max(a, 10));
    printf("min=%d\n", Min(a, 10));
    printf("avg=%d\n", Average(a, 10));
    return 0;
}
