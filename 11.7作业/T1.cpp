#include<stdio.h>
int isDaffodil(int num){
	int sum=0,now=num;
		
	for(int i=1;i<=3;i++){
		int k=now%10;//ȡ��λ 
		now/=10;//ȥ����λ 
		sum+=k*k*k;
	}
	if(num==sum)  return 1;
	return 0;	
}
int main(){
	
	for(int i=100;i<=999;i++){
		if(isDaffodil(i))
			printf("%d ",i);
	}
	
	return 0;
} 
