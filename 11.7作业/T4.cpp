#include<stdio.h>
int N,D;
 int countDigit(int num, int d){
 	if(num==0&&d==0) return 1;
 	int sum=0;
 	while(num!=0){
 		int k=num%10;//取个位 
 		num/=10;//去除个位 
 		if(k==d) sum++;
 	}
 	return sum;
 }
int main(){
	scanf("%d%d",&N,&D);
	
	printf("%d",countDigit(N,D));
	
	return 0;
}
