#include<stdio.h>
int N,M;
int check(int num){
	int last=10;
	while(num){
		int k=num%10;
		num/=10;
		if(k>last) return 0;
		last=k;
	}
	return 1;
}
int main(){
	scanf("%d",&M);
	for(int i=1;i<=M;i++){
		scanf("%d",&N);
		if(check(N)) {
			printf("%d Right",N);
		}
		else printf("Error");
	}
	
	
	return 0;
}
