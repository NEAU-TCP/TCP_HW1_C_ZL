#include <stdio.h>
int main()
{
    int Time;
    scanf("%d", &Time);
    int h = Time / 3600;
    int m = (Time % 3600) / 60;
    int s = Time % 60;
    printf("%d h %d min %d s", h, m, s);
    return 0;
}
