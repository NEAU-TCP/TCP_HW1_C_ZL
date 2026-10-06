#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("请输入正整数"); 
	}
	int i;
	
	for(i=1;i<=n;++i){
		int d=abs(2*i-(n+1));
		int k;
		for(k=0;k<d/2;++k){
			putchar(' ');
		} 
		for (k=0;k<n-d;++k){
			putchar('*');
		}
	putchar('\n');	
	}

return 0;	
}
