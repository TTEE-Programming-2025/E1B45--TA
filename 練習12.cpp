 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 int main (void)
 {
 char ch;
 int num =-1; //�@��J�X   �Ӧr��

 printf("�s���J�r��(�����   Esc �䬰��):");
 do
 {
 num ++;
 ch = getch();
 } while (ch != 27); // ASCII �� 27 ��� Esc ��
 printf("\n �@��J%d �Ӧr��.\n", num);
 system("pause");
 return 0;
 } 
