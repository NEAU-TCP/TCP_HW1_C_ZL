#include <stdio.h>

int main()
{
	int T = 0,Hour = 0,Min = 0,S = 0;
	
	scanf("%d",&T);
	
	Hour = T/3600;
	Min = T%3600/60;
	S = T%3600%60;
	
	printf("%d h %d min %d s",Hour,Min,S);
	
	return 0;
}
