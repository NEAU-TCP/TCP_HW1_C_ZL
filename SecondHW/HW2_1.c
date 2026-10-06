#include<stdio.h>

int main()
{
    float V = 0;
    scanf("%f",&V);
    
    if(V < 10)
    {
        printf("LOW\n");
    }
    else if(V >= 10 && V <= 12)
    {
        printf("NORMAL\n");
    }
    else if(V > 12)
    {
        printf("HIGH\n");
    }
    
    return 0;
}
