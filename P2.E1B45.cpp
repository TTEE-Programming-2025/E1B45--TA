#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// �D�����ܨ禡
void Main_Menu(void){
		printf("=================================\n") ;
		printf("==                             ==\n");
		printf("==        a.�e�X�����T����     ==\n");
		printf("==        b.��ܭ��k��         ==\n");
		printf("==        c.����               ==\n");
		printf("==                             ==\n");
		printf("=================================\n") ;
} 
// ���k��\��
int Multiplication_table (int n){
	int i,w;
	
	printf("�п�J1 �� 9 ����� n :");
	scanf("%d",&n);
	
	// �ˬd��J�O�_���T
	while(n<1||n>9){
	printf("���~�A���� :");
	scanf("%d",&n);	}
	
	// �L�Xn*n�����k��
	for  (i=1;i<=n;i++){
		for  (w=1;w<=n;w++){
			printf("%d*%d=%d ",i,w,i*w);	}
		printf("\n");}
	return n;}
	
// �e�X�����T����
char Right_triangle(){
	int i=1,j=1,k=1,n,lines;
	char word;
	printf("�п�Ja �� n �� �r�� :");
	fflush(stdin);		// �M����J�w��
	scanf("%c",&word);
	n=word;
	
	// �ˬd��J�O�_�b 'a' ~ 'n' �d��
	while(word<'a'||word>'n'){
	printf("���~�A���� :");
	scanf("%c",&word);  	}
	n=word;
	
	// �ھڿ�J�r���A�e�X�����T����
	for  (i=n-'a';i>=0;i--){
		for  (j='a'+i;j>='a'+1;j--){
			printf(" ");
		} 
		for  (k='a'+i;k<=n;k++){ 
		
			printf("%c",k);
		}
		printf("\n");} 
}
// �D�{��
int main (void){
	int n,x;
	char c;
		//�өʤ��� 
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
 	//�P�_�K�X�O�_���T 
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
	//�P�_ a,b,c ������ 
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












