#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// 主選單顯示函式
void Main_Menu(void){
		printf("=================================\n") ;
		printf("==                             ==\n");
		printf("==        a.畫出直角三角形     ==\n");
		printf("==        b.顯示乘法表         ==\n");
		printf("==        c.結束               ==\n");
		printf("==                             ==\n");
		printf("=================================\n") ;
} 
// 乘法表功能
int Multiplication_table (int n){
	int i,w;
	
	printf("請輸入1 至 9 的整數 n :");
	scanf("%d",&n);
	
	// 檢查輸入是否正確
	while(n<1||n>9){
	printf("錯誤，重輸 :");
	scanf("%d",&n);	}
	
	// 印出n*n的乘法表
	for  (i=1;i<=n;i++){
		for  (w=1;w<=n;w++){
			printf("%d*%d=%d ",i,w,i*w);	}
		printf("\n");}
	return n;}
	
// 畫出直角三角形
char Right_triangle(){
	int i=1,j=1,k=1,n,lines;
	char word;
	printf("請輸入a 至 n 的 字元 :");
	fflush(stdin);		// 清除輸入緩衝
	scanf("%c",&word);
	n=word;
	
	// 檢查輸入是否在 'a' ~ 'n' 範圍內
	while(word<'a'||word>'n'){
	printf("錯誤，重輸 :");
	scanf("%c",&word);  	}
	n=word;
	
	// 根據輸入字元，畫出直角三角形
	for  (i=n-'a';i>=0;i--){
		for  (j='a'+i;j>='a'+1;j--){
			printf(" ");
		} 
		for  (k='a'+i;k<=n;k++){ 
		
			printf("%c",k);
		}
		printf("\n");} 
}
// 主程式
int main (void){
	int n,x;
	char c;
		//個性介面 
 		printf("==============================\n") ;
 		printf("==        		    ::\n");
 		printf("==         (  歡迎  )       ::\n");
 		printf("==        		    ::\n");
 		printf("::  邱邱邱   邱   邱邱邱    ==\n") ;
 		printf("==  邱       邱   邱   邱   ==\n") ;
 		printf("==  邱邱邱   邱   邱  邱    ==\n") ;
 		printf("==  邱       邱   邱   邱   ::\n");
 		printf("==  邱邱邱   邱   邱邱邱    ==\n") ;
 		printf("==                          ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
 		printf("==                          ==\n") ;
 		printf("::    邱 邱      邱邱邱邱   ==\n") ;
 		printf("==   邱  邱      邱         ==\n") ;
 		printf("==  邱邱邱邱邱    邱邱邱    ::\n");
 		printf("==       邱            邱   ==\n") ;
 		printf("::       邱      邱邱邱邱   ==\n") ;
 		printf("==                          ::\n") ;
 		printf("==      [ 按任意按鍵 ]      ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
 	//判斷密碼是否正確 
	do{
	printf("輸入一個密碼 :");
	scanf("%d",&n);
	x++;
	if(n!=2025) printf("錯誤，請") ;
	if (x==3){
		printf("錯誤3次");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       歡迎       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	//判斷 a,b,c 的條件 
	do{
	Main_Menu();
	fflush(stdin);
	scanf("%c",&c);
	system("CLS");
	if (c=='a'||c=='A'){ 
		Right_triangle();
		fflush(stdin);
		getchar ();
		system("CLS");} 
	if (c=='b'||c=='B'){ 
		Multiplication_table(n);
		fflush(stdin);
		getchar ();
		system("CLS");	} 
	if (c=='c'||c=='C'){ 
		printf("Continue? (y/n) :");
		fflush(stdin);
		c=getchar();
		system("CLS");
		if (c=='n'||c=='N'){
		return 0;	}	} 
   		}while(1);

	return 0;
}












