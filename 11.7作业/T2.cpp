#include<stdio.h>
int isPerfectnum(int num){
	int sum=1;
	for(int i=2;i<=num-1;i++){
		if(num%i==0)
			sum+=i;//加和因子 
	}
	if(num==sum) return 1;
	return 0;
}
int main(){
	
	for(int i=2;i<=1000;i++){
		if(isPerfectnum(i))
			printf("%d ",i);
	}
	return 0;
}
