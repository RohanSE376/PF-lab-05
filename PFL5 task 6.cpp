#include<stdio.h>
int main(){
	int a,b;
	printf("Enter number a and b:\n");
	scanf("%d %d",&a,&b);
	(a<b)?printf("b is greater") : printf("a is greater");
	return 0;
}
