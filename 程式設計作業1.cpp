#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void second (void); 
int main (void){
	int password ;  /*�w�q���*/ 
	char word;		/*�w�q�r��*/ 
		printf("==============================\n") ;
		printf("==        			        ::\n");
		printf("==       (	 �w��	)       ::\n");
		printf("==        			        ::\n");
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
		printf("==  ����������    ������ 	::\n");
		printf("==       ��            ��   ==\n") ;
		printf("::       ��      ��������   ==\n") ;
		printf("==                          ::\n") ;
		printf("==      [ �����N���� ]      ==\n") ;
		printf("::                          ==\n") ;
		printf("==============================\n") ;
		getche();	/*���ݫ��U���N��*/ 
		system("cls");	/*�M�ſù�*/ 

		printf("�п�J�K�X\n");
		scanf("%d",&password);	/*��J�K�X*/ 
		
		if (password==2025){ 	/*�P�_��*/ 
			printf("�w��\n");
			system("pause");} 
		else { 
			printf("\a��J���~�I\n");	
        	system("pause");
        	return 0;} 
		system("cls");
		second();	/*�I�s second ���*/ 
		
	
		
		
		system("pause");
        return 0;
}
void second (void){		/*�إ� second ���*/ 
		char word;
		
		printf("=================================\n") ;
		printf("==   'A'...'Z' : Uppercase     ==\n");
		printf("==   'a'...'z' : Lowercase     ==\n");
		printf("==   '0'...'9' : Digit         ==\n");
		printf("==   Otherwise : E1B45 ���t��  ==\n");
		printf("=================================\n") ;
		
		printf("�п�J�r��");
		fflush(stdin);		/*�M�Žw�İ�*/ 
		scanf("%c",&word);
		
		if (word>='a'&& word<='z'){		/*�P�_��*/ 
			printf(" Lowercase\n");
		}
		else if (word>='A'&& word<='Z'){
			printf(" Uppercase\n");
		}
		else if (word>='0'&& word<='9'){
			printf(" Uppercase\n");
		}
		else{
			printf(" E1B45 ���t�� \n");
		}
	
		return  0;	
}
