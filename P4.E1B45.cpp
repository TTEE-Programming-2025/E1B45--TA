#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
#include<string.h>
struct data{
	char name[7];
	int ID;
	int math;
	int physics;
	int english;	
};
typedef struct data Qiu[10];
int main (){
	Qiu Data;  
	int password,k=0,c,num,i;
	printf("==============================\n");
    printf("==                          ==\n");
    printf("==       Welcome!           ==\n");
    printf("==                          ==\n");
    printf("::  QIU QIU QIU QIU QIU     ==\n");
    printf("==  QIU     QIU   QIU       ==\n");
    printf("==  QIU QIU QIU   QIU QIU   ==\n");
    printf("==  QIU     QIU   QIU       ==\n");
    printf("==  QIU QIU QIU   QIU QIU   ==\n");
    printf("==                          ==\n");
    printf("::                          ==\n");
    printf("==============================\n");
    printf("==                          ==\n");
    printf("::   QIU QIU   QIU QIU QIU  ==\n");
    printf("==   QIU QIU       QIU      ==\n");
    printf("==   QIU QIU QIU   QIU QIU  ==\n");
    printf("==      QIU          QIU    ==\n");
    printf("::      QIU     QIU QIU QIU ==\n");
    printf("==                          ==\n");
    printf("==     [ Press any key ]    ==\n");
    printf("::                          ==\n");
    printf("==============================\n");
    	do{
    		printf("�п�J�K�X (�|�ӼƦr) :");
    		scanf("%d",&password);
    		if(password!=2){
    			printf("���~�A");
    			k++;
			}
			if(k==3)return 0;		
		}while(password!=2);
	printf("\n     �w��");
	//////////////		Main Menu 
	do{ 
	system("CLS");
	printf("------------[Grade System]------------"); 
	printf("|  a. Enter student grades    		 |");
	printf("|  b. Display student grades   		 |");
	printf("|  c. Search for student grades  	 |");
	printf("|   d. Grade ranking      			 |");
	printf("|  e. Exit system           		 |");
	printf("|     								 |");
	printf("--------------------------------------\n"); 
		c=getch();
		if(c=='a'||c=='A'){
			system("CLS");
			printf("��J�]5~10�^����� :");
			scanf("%d",&num);
			for(i=0;i<num;i++){
				printf("�ǥͩm�W�B�Ǹ��]6���ơ^�B�ƾǡB���z�B�^�媺���Z�]0~100���^\n   ");
				scanf("%s %d %d %d %d",Qiu[i].name,Qiu[i].ID,Qiu[i].math,Qiu[i].physics,Qiu[i].english);
					if(Qiu[i].ID!=<100000 || Qiu[i].ID>10000000 || Qiu[i].math<0 || Qiu[i].math>100 || Qiu[i].physics<0 || Qiu[i].physics>100 ||Qiu[i].english<0 || Qiu[i].english>100 |){
						printf("�o�{���~�T���ín�D�勵");
					}
			}
		
		}
	return 0;
}























