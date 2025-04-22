#include<stdio.h>
#include<stdlib.h>

int password (int n){
	int x=0;
	do{ 
	printf("請輸入密碼 :");
	scanf("%d",&n);
	x++;
	if (x==3){
		printf("錯誤3次");
		return 0;}
	} while(n!=2025);
	printf(" 歡迎 ");
	
	return n;
}
int main (void){
	int n;
	password(n);
	getche ();
	system("CLS");
	
	
	return 0;
}












