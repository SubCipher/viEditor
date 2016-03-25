#include <stdio.h>
int main(void){


	float fahr, celsius;
	int lower, upper,step;
	
	lower = 0;
	upper = 300;
	step = 20;

	celsius = upper;

	printf("\n\nTemperature Conversion Table \n\n");	
	printf("C	F\n\n");

	while (celsius >= lower){

		fahr = (9.0 / 5.0 ) * (celsius + 32.0);
		printf("%3.0f %6.1f\n",	celsius, fahr);
		celsius = celsius - step;
	}

return 0 ;
}

