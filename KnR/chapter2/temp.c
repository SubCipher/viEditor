#include <stdio.h>

#define MAXLIM 1024



int main(void){

	int i, c;
	int count;
	char s[MAXLIM];

	while((c = getchar()) != EOF){

	if( c != ' ' || c != '\t'){
		++count;
		s[++i] = c;
		}

	else{

		s[++i] = c;
		
		}
	}
	int j;
	for(j = 0; j < count; ++j){
	
		printf("%c", s[j]);

	}

return 0;

}