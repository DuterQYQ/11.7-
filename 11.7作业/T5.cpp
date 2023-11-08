#include<stdio.h>
int a[10];//a[i]表示2的i次方
int N; 
void turn(int num){
	int last=0;
	for(int i=9;i>=0;i--){
		if(num>=a[i]){
			for(int j=1;j<=last-i-1;j++)//打印两个1之间的0 
				printf("0");
				
			printf("1");	
			last=i;
			num-=a[i];
		}
	}
	for(int i=0;i<=last-1;i++)
		printf("0"); 
}
int main(){
	a[0]=1;
	for(int i=1;i<=9;i++)
		a[i]=a[i-1]*2;
		scanf("%d",&N);
	turn(N);
	return 0;
}
