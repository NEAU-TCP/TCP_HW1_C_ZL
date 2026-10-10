#include<stdio.h>
int Max(int a[],int n){
	int max_val = a[0];
	for(int i = 1;i < n;i++){
		if(a[i] > max_val){
			max_val = a[i];
		} 
    }
    return max_val;
} 
int Min(int a[],int n){
	int min_val = a[0];
	for(int i = 1;i < n;i++){
		if(a[i] < min_val){
			min_val = a[i];
		}
	} 
    return min_val;
 }
 int Average(int a[], int n){
 	int sum = 0;
 	for(int i = 0;i < n;i++){
 		sum += a[i];
	 }
	return sum / n;
 }
 int main(){
 	int sensor_data[10];
 	for(int i = 0; i < 10;i++){
 		scanf("%d", &sensor_data[i]);
	 }
  printf("max = %d\n", Max(sensor_data, 10));
  printf("min = %d\n", Min(sensor_data, 10));
  printf("average = %d\n", Average(sensor_data, 10));
  return 0;
 }
