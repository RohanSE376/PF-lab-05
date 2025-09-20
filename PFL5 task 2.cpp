#include <stdio.h>
int main(){
	int age;
		printf("Enter your age to determine your category:\n");
		scanf("%d",&age);
		
		if(age<18){
			printf("You are child");
		}
		else if(age>=18 && age<30){
			printf("You are a teenager");
		}
		else if(age>=30 && age<40){
			printf("You are an adult");
		}
		else if (age>=40){
			printf("You are a senior");
		}
		return 0;
}
