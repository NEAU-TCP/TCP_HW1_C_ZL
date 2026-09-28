#include <stdio.h>
int main()
{
    double d, nL, nR;
    double pai = 3.1415926;
    scanf("%lf %lf %lf", &d, &nL, &nR);

    double vL = pai * d * nL / 60;
    double vR = pai * d * nR / 60;
    double v  = (vL + vR) / 2;

    printf("vL = %.3f m/s\nvR = %.3f m/s\nV = %.3f m/s\n", vL,vR,v);

    return 0;
}
