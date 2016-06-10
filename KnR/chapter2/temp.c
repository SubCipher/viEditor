#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

char *getInput(n){
	
	int i=0;
	int c;
	char* s;
	s = (char*)calloc(n,sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("s array index ID: %d | sizeof = %lu | memory address %p | contents %c",i,sizeof(s[i]),&s[x],s[x]);
		printf("\n");
		i++;
		}

//	free(s);
	return s;
}

int main(void){

	int i=0;
	int elementCount =0;
	int numArraysToCompare =0; 
	int j,x,k =0;	
	int breakCount=0;	
	char* inputText;
	printf("how much memory should we allocate for array elements?: \n");	
	scanf("%d",&elementCount);
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	char* s[numArraysToCompare][elementCount];

	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);

	for(i = 0; i < 100; i++){
		s[numArraysToCompare][elementCount] = 0;
		}

	printf("\n\n");
	
	printf("[sample A] pointer address %p | contents of address %p \n",&inputText,inputText);
	printf("[sample AA] pointer address %p | contents of address %p ",&inputText+4,&inputText[4]);

	printf("\n\n");
	printf("[sample B] pointee address: %p |contents of address: %s",*(&inputText),&(*inputText));	

	printf("\n\n");
	
	for(i =0; i<strlen(inputText); i++){
		printf("[sample e] pointer address %p | contents of address %p \n",&inputText + i, inputText +i);
		}
	printf("\n\n");
	
	printf("%lu = strlen(inputText)",strlen(inputText));

	printf("\n\n");

		while( i < strlen(inputText) ) {
			if(inputText[i] != 'e'){
				s[i][j] = inputText[j];
				++x;
				}
			if(inputText[i] == 'e'){
				s[i][j][x] = '\0';
				++j;
				x =0;
				}
			++i;
		}

	for(x =0; x< strlen(inputText); x++){		
		printf("main index ID:sx[i][%c]",]);

	}

	return 0;
}
