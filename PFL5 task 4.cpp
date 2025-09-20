#include<stdio.h>
int main(){
	int withdrawl_amount,limit=500;
	printf("Enter amount to withdraw:\n");
	scanf("%d",&withdrawl_amount);
	if(withdrawl_amount<=limit && withdrawl_amount%20==0){
		printf("Withdrawl approved");
	}else{
		printf("Withdrawl denied");
	}
	return 0;
}
