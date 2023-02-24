#include<stdio.h>

main(){
	int a,n;
	printf("Enter value  : ");
	scanf("%d",&a);
	
	n=a*a;
	
	int *b;
	
	b = &n;
	
	printf("%u -> %d", b ,*b);
}
