#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int half=(n+1)/2; 
    int i=1;
    while(i<=n)
	{
        int h=(i<=half)?i:(n-i+1); 
        int a=half-h;
        int b=2*h-1;
        int j= 0;
        while(j<a)
		{
		 printf(" "); 
		 j++; 
		}
        j = 0;
        while(j<b) 
		{ printf("*"); j++; }
        printf("\n");
        i++;
    }
    return 0;
}
