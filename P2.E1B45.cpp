#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int password (int n){
	int x=0;
	do{ 
	printf("�п�J�K�X :");
	scanf("%d",&n);
	x++;
	if (x==3){
		printf("���~3��");
		return 0;}
	} while(n!=2025);
	printf(" �w�� ");
	
	return n;
}
void Main_Menu(void){
		printf("=================================\n") ;
		printf("==                             ==\n");
		printf("==        a.�e�X�����T����     ==\n");
		printf("==        b.��ܭ��k��         ==\n");
		printf("==        c.����               ==\n");
		printf("==                             ==\n");
		printf("=================================\n") ;
} 

int main (void){
	int n;
	password(n);
	fflush(stdin);
	getchar ();
	system("CLS");
	Main_Menu();
	getchar ();
	system("CLS");

	return 0;
}












