#include <stdio.h>
#include <stdlib.h>
double my_fun(int n);

int main (){
	int n,i=2;
	printf("��J��� n ");
	scanf("%d",&n);
	while (n<=0){
		printf("����");
		scanf("%d",&n);
	}
	printf("my_fun(%d)�O %f\n",n,my_fun(n));
	printf("my_fun(8)�O %f\n",my_fun(n));
	printf("my_fun(10)�O %f\n",my_fun(n));
	while((my_fun(i)-my_fun(i-1))>=0.00001){
		i++; 
	}
	printf("my_fun(n)�O%d�Ȯɸ��X\n",i);	
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

