#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
void exhibit (char momo[9][9]){
	int i,j;
	printf("\\123456789");
	for (i=0;i<9;i++){
			printf("\n%d",9-i);
		for(j=0;j<9;j++){ 
			printf("%c",momo[i][j]);
			}
		}
	}
void cancel (char momo[9][9]){
	int i=0,j=0,k=0;
		for (i=0;i<9;i++){ 
			for (j=1;j<9;j++){
				while (momo[i][j]=='@'){
					momo[i][j]='-';
				}
			}	
		}	
	return ;	
}
char change (char momo[9][9]){
	int i=0,j=0,k=0;
		for (i=0;i<9;i++){ 
			for (j=1;j<9;j++){
				while (momo[i][j]=='@'){
					momo[i][j]='*';
				}
			}	
		}	
	return momo[9][9];	
}

		

int main (void){
	int i,j,k,a,n,x;
	char c;
	char momo[9][9]={'-'};
	srand( time(NULL) );
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
	
	if(n!=2025){ printf("¿ù»~¡A½Ð"); x++;} 
	if (x==3){
		printf("¿ù»~3¦¸");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       Åwªï       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	/////////¹w³]®y¦ìªí
	printf("\\123456789");
	for (i=0;i<9;i++){ 
		for(j=0;j<9;j++){ 
			momo[i][j]='-';} 
}
	for (i=0;i<10;i++){
	 int a= rand() % 9,b= rand() % 9;
	 	while(momo[a][b]=='*'){ 
			a= rand() % 9,b= rand() % 9;} 
			momo[a][b]='*';	
} 
	
	//////////////////////        ¥D¿ï³æ 
	do{ 
	system("CLS");
	printf("---------[Booking System]----------\n" ) ;
	printf("| a. Available seats               |\n") ;
	printf("| b. Arrange for you               |\n") ;
	printf("| c. Choose by yourself            |\n") ;
	printf("| d. Exit                          |\n") ;
	printf("------------------------------------\n") ;
	
	char choose=getch();
	if (choose=='a'||choose=='A'){
			exhibit(momo);
			getche();	
	}
	else if (choose=='b'||choose=='B'){
		printf("½Ð°Ý»Ý­n´X­Ó®y¦ì(1~4): ");	
		scanf("%d",&k);
		if(k==1){
			i=rand()%9,j=rand()%9;
				while (momo[i][j]=='-'){
					momo[i][j]='@';
				}
			exhibit(momo);
			printf("Are you satisfied? ( y/n ) :");
			fflush(stdin);
			scanf("%c",&a);
			if (a=='y')
				change(momo);	
			if (a=='n')
				cancel(momo); 
			}
		if (k==2){
			
			while(1){ 
				i=rand()%9,j=rand()%8;
				while (momo[i][j]=='-'&&momo[i][j+1]=='-'){
					momo[i][j]='@';
					momo[i][j+1]='@';
					break;
				}
			} 
			exhibit(momo);
			printf("Are you satisfied? ( y/n ) :");
			fflush(stdin);
			scanf("%c",&a);
			if (a=='y')
				change(momo);	
			if (a=='n')
				cancel(momo); 
			}
			
			
			
			
			
			
			
			
				
		}	
	 
}while(1); 
	
	
	
	
	
	
	return 0;	
} 
	












