#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int password (int n){
	int x=0;
	do{ 
	printf("�п�J�K�X :");
	scanf("%d",&n);
	x++;
	if (x==3){
		printf("���~3��");
		return 0;}
	} while(n!=2025);
	printf(" �w�� ");
	
	return n;
}
void Main_Menu(void){
		printf("=================================\n") ;
		printf("==                             ==\n");
		printf("==        a.�e�X�����T����     ==\n");
		printf("==        b.��ܭ��k��         ==\n");
		printf("==        c.����               ==\n");
		printf("==                             ==\n");
		printf("=================================\n") ;
} 
int Multiplication_table (int n){
	int i,w;
	
	printf("�п�J1 �� 9 ����� n :");
	scanf("%d",&n);
	
	while(n<1||n>9){
	printf("���~�A���� :");
	scanf("%d",&n);	}
	
	for  (i=1;i<=n;i++){
		for  (w=1;w<=n;w++){
			printf("%d*%d=%d ",i,w,i*w);	}
		printf("\n");}
	return n;}
char Right_triangle(){
	char word;
	printf("�п�Ja �� n �� �r�� :");
	scanf("%c",&word);
	while(n<'a'||n>'n'){
	printf("���~�A���� :");
	scanf("%c",&word);	}
	for  (i=1;i<=n;i++){
		for  (s=1;s<=n;s++){
			for  (w=1;w<=n;w++){ 
			
			printf("%d*%d=%d ",i,w,i*w);	}
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
	Multiplication_table(n);

	return 0;
}












