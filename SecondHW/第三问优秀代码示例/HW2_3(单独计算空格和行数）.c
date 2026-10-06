#include <stdio.h>
int main(){
	int n,i,k,m,a,b,c,d,e;
	scanf("%d",&n);
	if(n%2!=0){
		m=n/2;
		a=1;
		d=1;
		e=n-2;
		for(i=1;i<=(n/2+1);i++){
			for(k=1;k<=m;k++){
				printf(" ");
			}
			for(b=1;b<=a;b++){
				printf("*");
			}
			for(c=1;c<=m;c++){
				printf(" ");
			}
			m--;
			a+=2;
			printf("\n");
		}
		for(i=1;i<=n/2;i++){
			for(k=1;k<=d;k++){
				printf(" ");
			}
			for(b=1;b<=e;b++){
				printf("*");
			}
			for(c=1;c<=d;c++){
				printf(" ");
			}
			d++;
			e-=2;
			printf("\n");
		}
	}
	else{
		m=(n-1)/2;
		a=1;
		d=0;
		e=n-1;
		for(i=1;i<=(n-1)/2+1;i++){
			for(k=1;k<=m;k++){
				printf(" ");
			}
			for(b=1;b<=a;b++){
				printf("*");
			}
			for(c=1;c<=m;c++){
				printf(" ");
			}
			m--;
			a+=2;
			printf("\n");
		}
		for(i=1;i<=n/2;i++){
			for(k=1;k<=d;k++){
				printf(" ");
			}
			for(b=1;b<=e;b++){
				printf("*");
			}
			for(c=1;c<=d;c++){
				printf(" ");
			}
			d++;
			e-=2;
			printf("\n");
		}
	}
	return 0;
}
