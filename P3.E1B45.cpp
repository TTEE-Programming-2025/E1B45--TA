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
    	printf("�гv�@��J�y��( ��: 1-2,2-9 )");
        fgets(temp, sizeof(temp), stdin); // Ū���@��檺�r��

        if (temp[0] == '0') break;// ��J0���� 

        if (sscanf(temp, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9) {
            printf("�榡���~�A�Э��s��J�C\n");
            continue;
        }

        if (momo[9 - row][col - 1] == '*' || momo[9 - row][col - 1] == '@') {
            printf("�Ӯy��w�Q����A�Э��s��J�C\n");
            continue;
        }

        momo[9 - row][col - 1] = '@';
    }

	exhibit(momo); // ��ܥ]�t@���y���

    printf("�Y�L�~�A�Ы����N��T�{...");
    getch(); // getch ���Ϋ� Enter

    // �N @ �ഫ�� *
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (momo[i][j] == '@') {
                momo[i][j] = '*';
            }
        }
    }

    system("cls"); // �M���ù��A�^�D���
}


int main (void){
	int i,j,k,a,n,x;
	char c;
	char momo[9][9]={'-'};
	srand( time(NULL) );
		////////////          �өʤ��� 
 		printf("==============================\n") ;
 		printf("==        		    ::\n");
 		printf("==         (  �w��  )       ::\n");
 		printf("==        		    ::\n");
 		printf("::  ������   ��   ������    ==\n") ;
 		printf("==  ��       ��   ��   ��   ==\n") ;
 		printf("==  ������   ��   ��  ��    ==\n") ;
 		printf("==  ��       ��   ��   ��   ::\n");
 		printf("==  ������   ��   ������    ==\n") ;
 		printf("==                          ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;
 		printf("==                          ==\n") ;
 		printf("::    �� ��      ��������   ==\n") ;
 		printf("==   ��  ��      ��         ==\n") ;
 		printf("==  ����������    ������    ::\n");
 		printf("==       ��            ��   ==\n") ;
 		printf("::       ��      ��������   ==\n") ;
 		printf("==                          ::\n") ;
 		printf("==      [ �����N���� ]      ==\n") ;
 		printf("::                          ==\n") ;
 		printf("==============================\n") ;

 	//�P�_�K�X�O�_���T 
	do{
	printf("��J�@�ӱK�X :");
	scanf("%d",&n);
	
	if(n!=2025){ printf("���~�A��"); x++;} 
	if (x==3){
		printf("���~3��");
		return 0;}
		} while(n!=2025);
	printf(" \n ");
	printf("       �w��       ");
	fflush(stdin);
	getchar ();
	system("CLS");
	/////////�w�]�y���
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
	
	//////////////////////        �D��� 
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
		printf("�аݻݭn�X�Ӯy��(1~4): ");	
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
				printf("��J���~ �A�Э���:");
			}while(1);
		}
	 
}while(1); 
	
	
	
	
	
	
	return 0;	
} 
	












