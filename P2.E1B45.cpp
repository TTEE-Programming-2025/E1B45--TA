#include<stdio.h>
#include<stdlib.h>

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
int main (void){
	int n;
	password(n);
	getche ();
	system("CLS");
	
	
	return 0;
}












