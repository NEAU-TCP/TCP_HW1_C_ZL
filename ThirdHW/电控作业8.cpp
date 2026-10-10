#include<stdio.h>
void Sort(int a[], int n){
	for(int i = 0;i < n - 1;i++){//循环1：比较大小的轮数 
		for(int j = 0;j < n - 1 - i;j++){//循环2： 
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j+1] = temp;
				
			}
		}
	}
} 
int main() {
	int a[10];
	for(int i = 0;i < 10;i++){
		scanf("%d", &a[i]);
	}
Sort(a,10);
	for(int i = 0; i < 10;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
