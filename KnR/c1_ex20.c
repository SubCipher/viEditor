#include <stdio.h>

int main(){
	
	int c, inspace;
	inspace = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t'){
			if ( inspace == 0 ){
				inspace = 1;
				c = '    ';
			}
		}
		if(c != '\t'){
			inspace = 0;
			putchar(c);
		}
	}

return 0;

}
		
	

