#include<stdio.h>
 int MyStrLen(char str[]){
 	int count = 0;
 	while(str[count] != '\0'){
 		count++;
	 }
	 return count;
 }
  void MyStrRev(char str[]){
  	int len = MyStrLen(str);
  	int left = 0;
  	int right = len - 1;
  	
  	while(left < right){
  		int temp = str[left];
  		str[left] = str[right];
  		str[right] = temp;
  		left++;
  		right--;
	  }
  }
  
  int main(){
  	char str[101];//因为除了输入的数字数量外还有\0
	scanf("%s", str);
	int len = MyStrLen(str);
	printf("len = %d\n", len);
	
	MyStrRev(str);
	printf("Rev = %s\n", str);
	
   return 0; 
  }
