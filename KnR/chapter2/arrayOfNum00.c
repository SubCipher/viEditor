#include <stdio.h>
#include <string.h>

int main(void){

	int num = 0;
	int i = 0;
	int getNum = 0;
	int remainder =0;
	int total;


	printf("enter a number");
	scanf("%i",&getNum);


	num = getNum;

	while( num != 0){

		remainder = num % 10;
		num = num / 10;
	//	sum = num;
		total += remainder;
	
	}

	printf("remainder: %d\n",total);
		

	



return 0;
}