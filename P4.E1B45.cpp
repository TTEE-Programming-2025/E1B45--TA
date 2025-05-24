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
};	struct data Qiu[10];
void case_a (){
	int num;
		system("CLS");
		do{
		printf("輸入（5~10）的整數 :");
		scanf("%d",&num);
		if(num<1||num>2)
			printf("輸入錯誤，重輸 :");
	}while(num<1||num>2);
	for(int i=0;i<num;i++){ 
		system("CLS");
		printf("輸入第%d個學生姓名  : ",i+1);
		scanf("%s",	Qiu[i].name);
		do{
			system("CLS");
			printf("輸入第%d個（學生ID ) : ",i+1);
			scanf("%d",	&Qiu[i].ID);
			if(Qiu[i].ID<100000||Qiu[i].ID>999999)
				printf("錯誤");
		}while(Qiu[i].ID<100000||Qiu[i].ID>999999);
		do{
			system("CLS");
			printf("輸入第%d個學生(math成績) : ",i+1);
			scanf("%d",	&Qiu[i].math);
			if(Qiu[i].math<0||Qiu[i].math>100)
				printf("錯誤");
		}while(Qiu[i].ID<0||Qiu[i].math>100);
		do{
			system("CLS");
			printf("輸入第%d個學生(math成績) : ",i+1);
			scanf("%d",	&Qiu[i].physics);
			if(Qiu[i].physics<0||Qiu[i].physics>100)
				printf("錯誤");
		}while(Qiu[i].physics<0||Qiu[i].physics>100);
		do{
			system("CLS");
			printf("輸入第%d個學生(physics成績) : ",i+1);
			scanf("%d",	&Qiu[i].physics);
			if(Qiu[i].physics<0||Qiu[i].physics>100)
				printf("錯誤");
		}while(Qiu[i].physics<0||Qiu[i].physics>100);
		do{
			system("CLS");
			printf("輸入第%d個學生(english成績) : ",i+1);
			scanf("%d",	&Qiu[i].english);
			if(Qiu[i].english<0||Qiu[i].english>100)
				printf("錯誤");
		}while(Qiu[i].english<0||Qiu[i].english>100);
	} 
} 
int main (){
    struct data Qiu[10];
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
    		printf("請輸入密碼 (四個數字) :");
    		scanf("%d",&password);
    		if(password!=2){
    			printf("錯誤，");
    			k++;
			}
			if(k==3)return 0;		
		}while(password!=2);
	printf("\n     歡迎");
	//////////////		Main Menu 
	do{ 
	system("CLS");
	printf("------------[Grade System]------------\n"); 
	printf("|  a. Enter student grades    		|\n");
	printf("|  b. Display student grades   		 |\n");
	printf("|  c. Search for student grades  	 |\n");
	printf("|   d. Grade ranking      			 |\n");
	printf("|  e. Exit system           		 |\n");
	printf("|     								|\n");
	printf("--------------------------------------\n"); 
		c=getch();
		if(c=='a'||c=='A'){
			case_a();
		}
		
	
	}while(1);
	return 0;
}























