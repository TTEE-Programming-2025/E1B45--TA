#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void second (void); 
int main (void){
	int password ;
	char word;
	
		printf("�п�J�K�X\n");
		scanf("%d",&password);
		
		if (password==2025){ 
			printf("�w��\n");
			system("pause");} 
		else { 
			printf("\a��J���~�I\n");
        	system("pause");
        	return 0;} 
		system("cls");
		second();
		
	
		
		
		system("pause");
        return 0;
}
void second (void){
		char word;
		
		printf("==============================\n") ;
		printf("==   'A'...'Z' : Uppercase  ==\n");
		printf("==   'a'...'z' : Lowercase  ==\n");
		printf("==   '0'...'9' : Digit      ==\n");
		printf("==   Otherwise : Your name  ==\n");
		printf("==============================\n") ;
		
		printf("�п�J�r��");
		fflush(stdin);
		scanf("%c",&word);
		
		if (word>='a'&& word<='z'){
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
	
		return  ;	
}
