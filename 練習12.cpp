 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 int main (void)
 {
 char ch;
 int num =-1; //共輸入幾   個字元

 printf("連續輸入字元(直到按   Esc 鍵為止):");
 do
 {
 num ++;
 ch = getch();
 } while (ch != 27); // ASCII 值 27 表示 Esc 鍵
 printf("\n 共輸入%d 個字元.\n", num);
 system("pause");
 return 0;
 } 
