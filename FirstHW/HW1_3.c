#include <stdio.h>

int main()
{
	float d,nL,nR = 0;
	float pi = 3.1415926;
	float vL,vR,v = 0;
	
	scanf("%f %f %f",&d,&nL,&nR);
	
	vL = pi*d*nL/60;
	vR = pi*d*nR/60;
	v = (vL+vR)/2;
	printf("vL = %.3f m/s\nvR = %.3f m/s \nv = %.3f m/s \n",vL,vR,v);
	
	return 0;
}
