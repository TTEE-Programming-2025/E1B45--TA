#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int password (int n){
	int x=0;
	
	printf("�п�J�K�X :");
	scanf("%d",&n);
	x++;

	
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
	int i=1,j=1,k=1,n,lines;
	char word;
	printf("�п�Ja �� n �� �r�� :");
	fflush(stdin);
	scanf("%c",&word);
	n=word;
	while(word<'a'||word>'n'){
	printf("���~�A���� :");
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
int ask(void){
	char c;
	printf("Continue? (y/n) :");
	fflush(stdin);
	c=getchar();
	printf("%c",c);
	if (c=='n'||c=='N'){
		return 0;	}
		
}
int main (void){
	int n,x;
	char c;
 		printf("==============================\n") ;
 		printf("==        		    ::\n");
 		printf("==         (  �w��  )       ::\n");
 		printf("==        		    ::\n");
 		printf("::  ������   ��   ������    ==\n") ;
 		printf("==  ��       ��   ��   ��   ==\n") ;
 		printf("==  ������   ��   ��  ��    ==\n") ;
 		printf("==  ��       ��   ��   ��   ::\n");
 		printf("==  ������   ��   ������    ==\n") ;
 		printf("==                          ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
 		printf("==                          ==\n") ;
 		printf("::    �� ��      ��������   ==\n") ;
 		printf("==   ��  ��      ��         ==\n") ;
 		printf("==  ����������    ������    ::\n");
 		printf("==       ��            ��   ==\n") ;
 		printf("::       ��      ��������   ==\n") ;
 		printf("==                          ::\n") ;
 		printf("==      [ �����N���� ]      ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
	do{
	printf("��J�@�ӱK�X :");
	scanf("%d",&n);
	x++;
	if(n!=2025) printf("���~�A��") ;
	if (x==3){
		printf("���~3��");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       �w��       ");
	fflush(stdin);
	getchar ();
	system("CLS");
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












