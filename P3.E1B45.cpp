#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
void command_a (){
	int i=0,j=0,k=0;
	char momo[9][9]	;
		printf("\n\\123456789");

	for (i=0;i<9;i++){ 
		for(j=0;j<9;j++){ 
			momo[i][j]='-';} 
}
	for (i=0;i<9;i++){
		printf("\n%d",9-i);
		/////�L�X -
		for(j=0;j<9;j++){ 
			printf("%c",momo[i][j]);} 
}	


		
	return ;	
	}
	

int main (void){
	int n,x;
	char c;
		////////////          �өʤ��� 
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
	//////////////////////        �D��� 
	printf("---------[Booking System]----------\n" ) ;
	printf("| a. Available seats               |\n") ;
	printf("| b. Arrange for you               |\n") ;
	printf("| c. Choose by yourself            |\n") ;
	printf("| d. Exit                          |\n") ;
	printf("------------------------------------\n") ;
	
	char choose=getchar();
	if (choose=='a'||choose=='A'){
		command_a ();
	}
	
	
	
	
	
	
	
	return 0;	
} 
	












