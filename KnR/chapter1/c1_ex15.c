#include <stdio.h>

float FtoC (float f)
	{
		float c;
		c =  9.0 / 5.0 * (f + 32.0);
	return c;
}


int main(){
	
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	while (celsius <= upper) {
	fahr = FtoC(celsius);
	printf("%d\t %d\n", fahr, celsius);
	celsius = celsius + step;
	}
return 0;
}
