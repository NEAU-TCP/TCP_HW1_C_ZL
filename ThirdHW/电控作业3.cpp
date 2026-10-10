#include<stdio.h>
#define PI 3.1415926
int main(){
	 double d , nL , nR;
	 double vL , vR , v;
	 scanf("%lf %lf %lf",&d , &nL , &nR);
	 vL = PI * d * nL / 60.0;
	 vR = PI * d * nR / 60.0;
	 v = (vL + vR) / 2.0;
	 
	 printf("vL = %.3lf m/s vR = %.3lf m/s v = %.3lf m/s",vL , vR ,v);
	 
	 return 0;
	 
	 
}
