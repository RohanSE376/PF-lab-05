#include<stdio.h>
int main()
{
	char colour;
	printf("Enter Colour (R=red Y=yellow G=green):\n");
	scanf("%c",&colour);
	
	
	if(colour=='r' || colour=='R'){
		printf("Red:Stop");
	}
	else if(colour=='y' || colour=='Y'){
		printf("Yellow:Caution");
	}
	else if (colour=='g' || colour=='G'){
		printf("Green:Go");
	}
	return 0;
	
}
