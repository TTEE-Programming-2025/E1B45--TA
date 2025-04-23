#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

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
void Main_Menu(void){
		printf("=================================\n") ;
		printf("==                             ==\n");
		printf("==        a.畫出直角三角形     ==\n");
		printf("==        b.顯示乘法表         ==\n");
		printf("==        c.結束               ==\n");
		printf("==                             ==\n");
		printf("=================================\n") ;
} 

int main (void){
	int n;
	password(n);
	fflush(stdin);
	getchar ();
	system("CLS");
	Main_Menu();
	getchar ();
	system("CLS");

	return 0;
}












