#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
//    Display seating chart
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
//   Change '@' back to '-'
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
//    Confirm the position and change '@' to '*'
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
//     Choose your own seats
void choose_momo(char momo[9][9]) {
    char temp[10];
    int row, col;
	
    while (1) {
    	printf("�гv�@��J�y��( ��: 1-2,2-9 )");
        fgets(temp, sizeof(temp), stdin); // Read a whole line of string

        if (temp[0] == '0') break;// Enter 0 to end
		// 	Determine whether the input format and the input number are within the range
        if (sscanf(temp, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9) {
            printf("�榡���~�A�Э��s��J�C\n");
            continue;
        }
		//Determine if the seat is occupied
        if (momo[9 - row][col - 1] == '*' || momo[9 - row][col - 1] == '@') {
            printf("The seat has been selected, please re-enter\n");
            continue;
        }
		 
        momo[9 - row][col - 1] = '@';
    }

	exhibit(momo); // Show seat map containing @

    printf("If there are no errors, press any key to confirm....");
    getch(); 

    // Convert @ to *
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (momo[i][j] == '@') {
                momo[i][j] = '*';
            }
        }
    }

    system("cls"); // Clear the screen and return to the main menu
}

//Main function
int main (void){
	int i,j,k,a,n,x;
	char c;
	char momo[9][9]={'-'};
	srand( time(NULL) );
		////////////         Personalized interface
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

 	//Determine whether the password is correct
	do{
	printf("Enter a password :");
	scanf("%d",&n);
	
	if(n!=2025){ printf("Error, please"); x++;} 
	if (x==3){
		printf("Error 3 times");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       Welcome       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	/////////Preset seating chart
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
	
	//     Main Menu
	do{ 
	system("CLS");
	printf("---------[Booking System]----------\n" ) ;
	printf("| a. Available seats               |\n") ;
	printf("| b. Arrange for you               |\n") ;
	printf("| c. Choose by yourself            |\n") ;
	printf("| d. Exit                          |\n") ;
	printf("------------------------------------\n") ;
	// choose a,b,c,d 
	char choose=getch();
	if (choose=='a'||choose=='A'){
			exhibit(momo);// Display seating chart
			getche();	
	}
	else if (choose=='b'||choose=='B'){
		printf("How many seats do you need?(1~4): ");	
		scanf("%d",&k);
		//  random a seat
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
				change(momo);	//change @ to *
			if (a=='n')
				cancel(momo); 	//change @ to -
			}
		//  random Two seats connected
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
				change(momo);			//change @ to *
			if (a=='n')
				cancel(momo); 		//change @ to -
			}
		 //  randomThree seats connected
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
				change(momo);			//change @ to *
			if (a=='n')
				cancel(momo); 	   	//change @ to -
			}
	int found;
		//  random Four seats connected
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
			// Ask if you are satisfied   
			printf("Are you satisfied? ( y/n ) :");
			fflush(stdin);
			scanf("%c",&a);
			if (a=='y')
				change(momo);	//change @ to *
			if (a=='n')
				cancel(momo); 	//change @ to *
			}	
		
			
		}	
		if (choose=='c'||choose=='C'){
			choose_momo(momo);	//Enter your own seat
		}
	int g;
		if (choose=='d'||choose=='D'){
			printf("Continue? (y/n)");
			do{
				g=getch();
				if (g=='y')break;
				if(g=='n')return 0;
				printf("Input error, please re-enter:");
			}while(1);
		}
	 }while(1); 	
	return 0;	
} 
/*�z�L�o�����y��w���t�λs�@�A�ڼ��x�F C �y��������G���}�C�B����P�_�B�j��B�禡�]�p����¦���ΡC
�L�{���ھǷ|�p��βŸ��N��y�쪬�A�A�óB�z�ϥΪ̿�J�榡�P���~�P�_�A�]�z�L rand() �H���]�w�y��C
���M�L�{���J��@�ǿ��~�P�޿���D�A���]�]���[�`�F�ڹ�{�����c�P�����ޥ����x���A��ì�ܦh�C*/ 	












