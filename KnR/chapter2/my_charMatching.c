#include <stdio.h>
#include <stdlib.h>
#define MAXLIMIT 1024


/* get input */

char *getInput(int n2c){
	
	   int i =0, c;
	//char *s = malloc (sizeof(char) * n2c);

	char *s = (char *) calloc (MAXLIMIT-1, sizeof(char));
	while( i < n2c ){
			s[i] = getchar();
			++i;
		}
	return s;	
}


int main(void){

	int i =0, numberToCompare;
	int j =0;	
	char *inputText;
	char *S0[MAXLIMIT];

	printf("how many comparisons to make? ");
	scanf("%d",&numberToCompare);
	printf("\nrun these many times: %d\n",numberToCompare);
	
	for(i =0; i <= numberToCompare;i++){
	
		printf("enter some text\n");	
		S0[j++]= getInput(numberToCompare);
		
		}
	for(j =0; j < numberToCompare; ++j){
		printf("value %d is equal to = %s\n",j,S0[j]);
		}

return 0;
	

}