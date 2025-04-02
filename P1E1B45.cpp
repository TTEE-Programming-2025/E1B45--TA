#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void second (void); 

int main (void){
	int password ;  /*定義整數*/ 
	char word;		/*定義字元*/ 
		printf("==============================\n") ;
		printf("==                          ::\n");
		printf("==       ( 歡迎	)           ::\n");
		printf("==        		    ::\n");
		printf("::  邱邱邱   邱   邱邱邱    ==\n") ;
		printf("==  邱       邱   邱   邱   ==\n") ;
		printf("==  邱邱邱   邱   邱  邱    ==\n") ;
		printf("==  邱       邱   邱   邱   ::\n");
		printf("==  邱邱邱   邱   邱邱邱    ==\n") ;
		printf("==                          ==\n") ;
		printf("::                          ==\n") ;
		printf("==============================\n") ;
		printf("==                          ==\n") ;
		printf("::    邱 邱      邱邱邱邱   ==\n") ;
		printf("==   邱  邱      邱         ==\n") ;
		printf("==  邱邱邱邱邱    邱邱邱    ::\n");
		printf("==       邱            邱   ==\n") ;
		printf("::       邱      邱邱邱邱   ==\n") ;
		printf("==                          ::\n") ;
		printf("==      [ 按任意按鍵 ]      ==\n") ;
		printf("::                          ==\n") ;
		printf("==============================\n") ;
		getche();	/*等待按下任意鍵*/ 
		system("cls");	/*清空螢幕*/ 

		printf("請輸入密碼\n");
		scanf("%d",&password);	/*輸入密碼*/ 
		
		if (password==2025){ 	/*判斷密碼是否 = 2025*/ 
			printf("歡迎\n");
			system("pause");} 
		else { 
			printf("\a輸入錯誤！\n");	
        	system("pause");
        	return 0;} 
		system("cls");
		second();	/*呼叫 second 函數*/ 
		
	
		
		
		system("pause");
        return 0;
}
void second (void){		/*建立 second 函數*/ 
		char word;
		
		printf("=================================\n") ;
		printf("==   'A'...'Z' : Uppercase     ==\n");
		printf("==   'a'...'z' : Lowercase     ==\n");
		printf("==   '0'...'9' : Digit         ==\n");
		printf("==   Otherwise : E1B45 邱宇廷  ==\n");
		printf("=================================\n") ;
		
		printf("請輸入字元");
		fflush(stdin);		/*清空緩衝區*/ 
		scanf("%c",&word);
		
		if (word>='a'&& word<='z'){		/*判斷字元是否在 a~z裡面*/ 
			printf(" Lowercase\n");
		}
		else if (word>='A'&& word<='Z'){
			printf(" Uppercase\n");
		}
		else if (word>='0'&& word<='9'){
			printf(" Uppercase\n");
		}
		else{
			printf(" E1B45 邱宇廷 \n");
		}
	
		return  ;	
		//心得 我在這次作業學到怎麼用Github 並嘗試使用新學的區域變數 ， 雖然只是最基本的，但以後也會繼續加油的 
		
}
