#include <stdio.h>

int Sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    Sort(a, 10);
    
    for (int i = 0; i < 10; i++)
    {
        if (i >= 0)
        {
        	printf("%d", a[i]);
			printf(" ");	
		}
    }
    printf("\n");
    return 0;
}
