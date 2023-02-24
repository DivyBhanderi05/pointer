#include<stdio.h>

main(){
	int a,b;
	printf("Enter first value  : ");
	scanf("%d",&a);
	printf("Enter second value  : ");
	scanf("%d",&b);
	
	int *n,*m;
	n = &a;
	m = &b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Value of a after swap : %d\n",*n);
	printf("Value of b after swap : %d",*m);
}
