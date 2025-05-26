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
	char search[]={0};
	int num=0;
	float sum[10]={0} ,average[10]={0};
void aver(){

	for(int i=0;i<num;i++){
		sum[i]=Qiu[i].math+Qiu[i].english+Qiu[i].physics;
		average[i]=sum[i]/3;
	}
}
void case_a (){
		system("CLS");
		do{
		printf("輸入（5~10）的整數 :");
		scanf("%d",&num);
		if(num<5||num>10)
			printf("輸入錯誤，重輸 :");
	}while(num<5||num>10);
	for(int i=0;i<num;i++){ 
		system("CLS");
		printf("輸入第%d個學生姓名  : ",i+1);
		scanf("%s",	Qiu[i].name);
		///// ID
		do{
			system("CLS");
			printf("輸入第%d個（學生ID ) : ",i+1);
			scanf("%d",	&Qiu[i].ID);
			if(Qiu[i].ID<100000||Qiu[i].ID>999999)
				printf("錯誤，要六位數，請");
		}while(Qiu[i].ID<100000||Qiu[i].ID>999999);
		///// Math
		do{
			system("CLS");
			printf("輸入第%d個學生(math成績) : ",i+1);
			printf("\n範圍( 1~100 )");
			scanf("%d",	&Qiu[i].math);
			if(Qiu[i].math<0||Qiu[i].math>100)
				printf("錯誤");
		}while(Qiu[i].ID<0||Qiu[i].math>100);
		//// physics
		do{
			system("CLS");
			printf("輸入第%d個學生(physics成績) : ",i+1);
			printf("\n範圍( 1~100 )");
			scanf("%d",	&Qiu[i].physics);
			if(Qiu[i].physics<0||Qiu[i].physics>100)
				printf("錯誤");
		}while(Qiu[i].physics<0||Qiu[i].physics>100);
		/////  english
		do{
			system("CLS");
			printf("輸入第%d個學生(english成績) : ",i+1);
			printf("\n範圍( 1~100 )");
			scanf("%d",	&Qiu[i].english);
			if(Qiu[i].english<0||Qiu[i].english>100)
				printf("錯誤");
		}while(Qiu[i].english<0||Qiu[i].english>100);
	} 
} 
void case_b (){
	system("CLS");
	aver();
	for(int i=0;i<num;i++){
		printf("第%d個 姓名:%s 學號:%d math:%d phy:%d Engl:%d avg:%.1f\n",i+1,Qiu[i].name,Qiu[i].ID,Qiu[i].math,
		Qiu[i].physics,Qiu[i].english,average[i]);
	}
	system("pause");
}
void case_c (){
	int m,j=0;
	system("CLS");
	printf("請輸入要檢索的姓名 :");
	scanf("%s",&search);
	aver();
	for(int i=0;i<num;i++){ 
	if(strcmp(search,Qiu[i].name)==0) {
		m=i;j=1;
		printf("第%d個 姓名:%s 學號:%d math:%d phy:%d Engl:%d avg:%.1f\n",m+1,Qiu[m].name,Qiu[m].ID,Qiu[m].math,
		Qiu[m].physics,Qiu[m].english,average[m]);
		}
	}
	if(j==0){
		printf("\n資料不存在\n");
	}

	system("pause");
}
void case_d (){
	float max;
	struct data temp; 
	system("CLS");
	aver();
	for(int j=0;j<num-1;j++){ 
		for(int i=0;i<num-1;i++){ 
			if(average[i]<average[i+1]){ 
				max=average[i];
				average[i]=average[i+1];
				average[i+1]=max;
				
				temp = Qiu[i];
				Qiu[i] = Qiu[i+1];
				Qiu[i+1] = temp;

				
		} 
	}
}
 
	for(int i=0;i<num;i++){ 
		printf("第%d個 姓名:%s 學號:%d math:%d phy:%d Engl:%d avg:%.1f\n",i+1,Qiu[i].name,Qiu[i].ID,Qiu[i].math,
		Qiu[i].physics,Qiu[i].english,average[i]);
	} 
	system("pause");
}
int main (){
	int password,k=0,c,i;
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
    		if(password!=2025){
    			printf("錯誤，");
    			k++;
			}
			if(k==3)return 0;		
		}while(password!=2025);
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
		if(c=='b'||c=='B'){
			case_b();
		}
		if(c=='c'||c=='C'){
			case_c();
		}
		if(c=='d'||c=='D'){
			case_d();
		}
	char g;
		if(c=='e'||c=='E'){
			printf("繼續嗎? (y/n)");
			do{
				g=getch();
				if (g=='y')break;
				if(g=='n')return 0;
				printf("輸入錯誤，請重輸:");
			}while(1);
		}
	}while(1);
	return 0;
}























