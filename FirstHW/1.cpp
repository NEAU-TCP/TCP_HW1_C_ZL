#include<stdio.h>
int main()
{
	double U,I,t;
	scanf("%lf %lf %lf",&U,&I,&t);
	double P = U*I;
	double R = U/I;
	double E = P*t/3600;
	printf("P=%.2f W\nR=%.2f ohm\nE=%.3f Wh",P,R,E);
	return 0;
}



