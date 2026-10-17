#include <stdio.h>
#include <stdint.h> 

int main()
{
	uint8_t x = 0;
	scanf("%d",&x);
	uint8_t Low =x & 0x0F;
	uint8_t High = (x >> 4) & 0x0F;
    printf("%d %d\n", High, Low);
    
    return 0;
}
