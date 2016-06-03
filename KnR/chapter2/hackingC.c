#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getInput(n){
	
	int i, c;
	char* s;
	s = (char*)calloc(n,sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("function index: %d | value = %c | sizeof = %lu | memory address %p",i,s[i],sizeof(s[i]),&s[i]);
		printf("\n");
		i++;
		}

	free(s);
	return s;
}

int main(void){

	int i=0,count,numArraysToCompare; 
	int j =0;	
	char* inputText;
	//char s[10][count];
	printf("how much memory should we allocation for array elements?: \n");	
	scanf("%d",&count);
	
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	char* s[numArraysToCompare][count];

	printf("enter %d elements to store in memory: \n",count);
	  
	inputText = getInput(count);

	for(i =0; i < strlen(inputText); i++){
		s[j][i] = &inputText[i];
		printf("this is it: %c(%d) memory location: %p\n",s[j][0][i],i,&inputText[i]);
	}

	
	printf("\n\n");
	printf("what it is: %c | location in memory: %p \n",s[0][0][1], &s[0][0][1]);
	printf("what it is: %c | location in memory: %p \n",s[0][0][2], &s[0][0][2]);
	printf("what it is: %c | location in memory: %p \n",s[0][0][3], &s[0][0][3]);
	printf("\n\n");
return 0;

}
