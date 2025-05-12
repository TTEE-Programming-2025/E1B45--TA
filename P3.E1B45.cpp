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
void choose_momo(char momo[9][9]) {
    char temp[10];
    int row, col;
	
    while (1) {
    	printf("請逐一輸入座位( 例: 1-2,2-9 )");
        fgets(temp, sizeof(temp), stdin); // 讀取一整行的字串

        if (temp[0] == '0') break;// 輸入0結束 

        if (sscanf(temp, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9) {
            printf("格式錯誤，請重新輸入。\n");
            continue;
        }

        if (momo[9 - row][col - 1] == '*' || momo[9 - row][col - 1] == '@') {
            printf("該座位已被選取，請重新輸入。\n");
            continue;
        }

        momo[9 - row][col - 1] = '@';
    }

	exhibit(momo); // 顯示包含@的座位圖

    printf("若無誤，請按任意鍵確認...");
    getch(); // getch 不用按 Enter

    // 將 @ 轉換為 *
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (momo[i][j] == '@') {
                momo[i][j] = '*';
            }
        }
    }

    system("cls"); // 清除螢幕，回主選單
}


int main (void){
	int i,j,k,a,n,x;
	char c;
	char momo[9][9]={'-'};
	srand( time(NULL) );
		////////////          個性介面 
 		printf("==============================\n") ;
 		printf("==        		    ::\n");
 		printf("==         (  歡迎  )       ::\n");
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

 	//判斷密碼是否正確 
	do{
	printf("輸入一個密碼 :");
	scanf("%d",&n);
	
	if(n!=2025){ printf("錯誤，請"); x++;} 
	if (x==3){
		printf("錯誤3次");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       歡迎       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	/////////預設座位表
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
	
	//////////////////////        主選單 
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
		printf("請問需要幾個座位(1~4): ");	
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
				if (momo[i][j]=='-'&&momo[i][j+1]=='-'){
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
		if (k==3){
			
			while(1){ 
				i=rand()%9,j=rand()%8;
				if (momo[i][j]=='-'&&momo[i][j+1]=='-'&&momo[i][j+2]=='-'){
					momo[i][j]='@';
					momo[i][j+1]='@';
					momo[i][j+2]='@';
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
	int found;
		if (k==4){
			
			while(1){ 
				i=rand()%9,j=rand()%8;
				if (momo[i][j]=='-'&&momo[i][j+1]=='-'&&momo[i][j+2]=='-'&&momo[i][j+3]=='-'){
					momo[i][j]='@';
					momo[i][j+1]='@';
					momo[i][j+2]='@';
					momo[i][j+3]='@';
					found=1;
					break;
				}
				if (momo[i][j]=='-'&&momo[i][j+1]=='-'&&momo[i+1][j]=='-'&&momo[i+1][j+1]=='-'){
					momo[i][j]='@';
					momo[i][j+1]='@';
					momo[i+1][j]='@';
					momo[i+1][j+1]='@';
					found=1;
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
		if (choose=='c'||choose=='C'){
			choose_momo(momo);	
		}
	int g;
		if (choose=='d'||choose=='D'){
			printf("Continue? (y/n)");
			do{
				g=getch();
				if (g=='y')break;
				if(g=='n')return 0;
				printf("輸入錯誤 ，請重輸:");
			}while(1);
		}
	 
}while(1); 
	
	
	
	
	
	
	return 0;	
} 
	












