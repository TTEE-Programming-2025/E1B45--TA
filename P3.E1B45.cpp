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
		/////¦L¥X -
		for(j=0;j<9;j++){ 
			printf("%c",momo[i][j]);} 
}	


		
	return ;	
	}
	

int main (void){
	int n,x;
	char c;
		////////////          ­Ó©Ê¤¶­± 
 		printf("==============================\n") ;
 		printf("==        		    ::\n");
 		printf("==         (  Åwªï  )       ::\n");
 		printf("==        		    ::\n");
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
 		printf("==  ªôªôªôªôªô    ªôªôªô    ::\n");
 		printf("==       ªô            ªô   ==\n") ;
 		printf("::       ªô      ªôªôªôªô   ==\n") ;
 		printf("==                          ::\n") ;
 		printf("==      [ «ö¥ô·N«öÁä ]      ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
 	//§PÂ_±K½X¬O§_¥¿½T 
	do{
	printf("¿é¤J¤@­Ó±K½X :");
	scanf("%d",&n);
	x++;
	if(n!=2025) printf("¿ù»~¡A½Ð") ;
	if (x==3){
		printf("¿ù»~3¦¸");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       Åwªï       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	//////////////////////        ¥D¿ï³æ 
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
	












