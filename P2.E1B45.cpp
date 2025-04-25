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
int Multiplication_table (int n){
	int i,w;
	
	printf("請輸入1 至 9 的整數 n :");
	scanf("%d",&n);
	
	while(n<1||n>9){
	printf("錯誤，重輸 :");
	scanf("%d",&n);	}
	
	for  (i=1;i<=n;i++){
		for  (w=1;w<=n;w++){
			printf("%d*%d=%d ",i,w,i*w);	}
		printf("\n");}
	return n;}
char Right_triangle(){
	int i=1,j=1,k=1,n,lines;
	char word;
	printf("請輸入a 至 n 的 字元 :");
	scanf("%c",&word);
	n=word;
	while(word<'a'||word>'n'){
	printf("錯誤，重輸 :");
	scanf("%c",&word);  	}
	n=word;
	for  (i=n-'a';i>=0;i--){
		for  (j='a'+i;j>='a'+1;j--){
			printf(" ");
		} 
		for  (k='a'+i;k<=n;k++){ 
		
			printf("%c",k);
		}
		printf("\n");} 
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
	Right_triangle();

	return 0;
}












