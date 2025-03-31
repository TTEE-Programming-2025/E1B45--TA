#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void second (void); 
int main (void){
	int password ;  /*©w¸q¾ã¼Æ*/ 
	char word;		/*©w¸q¦r¤¸*/ 
		printf("==============================\n") ;
		printf("==        			        ::\n");
		printf("==       (	 Åwªï	)       ::\n");
		printf("==        			        ::\n");
		printf("::  ªôªôªô   ªô   ªôªôªô    ==\n") ;
		printf("==  ªô       ªô   ªô   ªô   ==\n") ;
		printf("==  ªôªôªô   ªô   ªô  ªô    ==\n") ;
		printf("==  ªô       ªô   ªô   ªô   ::\n");
		printf("==  ªôªôªô   ªô   ªôªôªô    ==\n") ;
		printf("==                          ==\n") ;
		printf("::                          ==\n") ;
		printf("==============================\n") ;
		printf("==                          ==\n") ;
		printf("::    ªô ªô      ªôªôªôªô   ==\n") ;
		printf("==   ªô  ªô      ªô         ==\n") ;
		printf("==  ªôªôªôªôªô    ªôªôªô 	::\n");
		printf("==       ªô            ªô   ==\n") ;
		printf("::       ªô      ªôªôªôªô   ==\n") ;
		printf("==                          ::\n") ;
		printf("==      [ «ö¥ô·N«öÁä ]      ==\n") ;
		printf("::                          ==\n") ;
		printf("==============================\n") ;
		getche();	/*µ¥«Ý«ö¤U¥ô·NÁä*/ 
		system("cls");	/*²MªÅ¿Ã¹õ*/ 

		printf("½Ð¿é¤J±K½X\n");
		scanf("%d",&password);	/*¿é¤J±K½X*/ 
		
		if (password==2025){ 	/*§PÂ_¦¡*/ 
			printf("Åwªï\n");
			system("pause");} 
		else { 
			printf("\a¿é¤J¿ù»~¡I\n");	
        	system("pause");
        	return 0;} 
		system("cls");
		second();	/*©I¥s second ¨ç¼Æ*/ 
		
	
		
		
		system("pause");
        return 0;
}
void second (void){		/*«Ø¥ß second ¨ç¼Æ*/ 
		char word;
		
		printf("=================================\n") ;
		printf("==   'A'...'Z' : Uppercase     ==\n");
		printf("==   'a'...'z' : Lowercase     ==\n");
		printf("==   '0'...'9' : Digit         ==\n");
		printf("==   Otherwise : E1B45 ªô¦t§Ê  ==\n");
		printf("=================================\n") ;
		
		printf("½Ð¿é¤J¦r¤¸");
		fflush(stdin);		/*²MªÅ½w½Ä°Ï*/ 
		scanf("%c",&word);
		
		if (word>='a'&& word<='z'){		/*§PÂ_¦¡*/ 
			printf(" Lowercase\n");
		}
		else if (word>='A'&& word<='Z'){
			printf(" Uppercase\n");
		}
		else if (word>='0'&& word<='9'){
			printf(" Uppercase\n");
		}
		else{
			printf(" E1B45 ªô¦t§Ê \n");
		}
	
		return  0;	
}
