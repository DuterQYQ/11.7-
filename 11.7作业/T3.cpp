#include<stdio.h>
int N;
int vis[10010];//���Ϊ1������ 
int pri[10001];//������ 
int cnt;//��ǰ�������� 
void f(){//ɸ���� 
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
		f();//Ԥ���������Ҫ������ 
		
		for(int i=1;i<=cnt;i++){//�������� 
			if(vis[N-pri[i]]){//�����N-���������Ҳ������  
				printf("%d = %d + %d",N,pri[i],N-pri[i]);
				return 0; 
			}
		}
		
	}
	
	
	return 0;
} 
