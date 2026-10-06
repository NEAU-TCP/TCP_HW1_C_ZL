#include <stdio.h>

int main()
{
	float U = 0, I = 0, t = 0;
	float E = 0, P = 0, R = 0;
	scanf("%f %f %f", &U, &I, &t);
	
	P = U*I;
	R = U/I;
	E = P*t/3600;
	
	printf("\nP=%.2f W\nR=%.2f ohm\nE=%.3f Wh\n",P, R, E);
	
	return 0;
}
