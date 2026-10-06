#include<stdio.h>

int main()
{
    int N = 0,Count = 0,Sum = 0;
    scanf("%d",&N);
    
    for(int i=0; i<N; i++)
    {
        if(i%3 == 0 && i%5 != 0)
        {
            Count++;
            Sum += i;
        }
    }
    printf("Count = %d\n", Count);
    printf("Sum = %d\n", Sum);
    
    return 0;
}
