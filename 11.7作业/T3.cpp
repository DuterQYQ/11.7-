#include<stdio.h>
int N;
int vis[10010];//如果为1是质数 
int pri[10001];//存质数 
int cnt;//当前质数个数 
void f(){//筛质数 
	for(int i=2;i<=N;i++)
		vis[i]=1;
	
	for(int i=2;i<=N;i++){
		
		if(vis[i]) pri[++cnt]=i;
		for(int j=1;j<=cnt&&i*pri[j]<=N;j++){
			vis[pri[j]*i]=0;
			if(i%pri[j]==0) 
				break;
		}
	}			
} 
int main(){
	
	while(1){
		scanf("%d",&N);
		if(N<=6||N%2==1) continue;
		f();//预处理算出需要的质数 
		
		for(int i=1;i<=cnt;i++){//遍历质数 
			if(vis[N-pri[i]]){//如果（N-这个质数）也是质数  
				printf("%d = %d + %d",N,pri[i],N-pri[i]);
				return 0; 
			}
		}
		
	}
	
	
	return 0;
} 
