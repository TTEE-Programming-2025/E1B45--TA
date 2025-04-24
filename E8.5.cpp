#include <stdio.h>
#include <stdlib.h>
double my_fun(int n);

int main (){
	int n,i=2;
	printf("輸入整數 n ");
	scanf("%d",&n);
	while (n<=0){
		printf("重輸");
		scanf("%d",&n);
	}
	printf("my_fun(%d)是 %f\n",n,my_fun(n));
	printf("my_fun(8)是 %f\n",my_fun(n));
	printf("my_fun(10)是 %f\n",my_fun(n));
	while((my_fun(i)-my_fun(i-1))>=0.00001){
		i++; 
	}
	printf("my_fun(n)是%d值時跳出\n",i);	
	system ("pause");
	return 0;
}
double my_fun(int n){
	int i=1,base=1;
	double sum=0,x ;
	for (i=1;i<=n;i++){
		base=base*i;
		sum=sum+(1/(double)base);
	}
	return sum;
}

