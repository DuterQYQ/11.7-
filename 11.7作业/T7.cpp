#include<stdio.h>
int y,m,d;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int isLeap(int year){
	if(y%400==0) return 1;
	if(y%4==0&&y%100!=0) return 1;
	return 0;
}
int isValidDate(int year, int month, int day){
	if(isLeap(year)) mon[2]=29;
	if(month<=0||month>12) return 0;
	if(day>mon[month]) return 0;
}
int days(int year, int month, int day){
	int sum=day;
	for(int i=1;i<=month-1;i++)
		sum+=mon[i];
	return sum;	
}
int main(){
	while(1){
		scanf("%d%d%d",&y,&m,&d);
	
		if(!isValidDate(y,m,d)){
			printf("Error\n");
			continue;
		} 
			
			
		printf("%d",days(y,m,d));
		break;
	}
	

	return 0;
}
