#include <stdio.h>
#define MAXLIMIT 1024

/* squeezey: delete all c from s */

char *squeeze (char s[], int c){

	int i,j;
	for( i = j = 0; s[i] != '\0'; i++)

		if(s[i] != c)
			s[j++] =s[i];
		return s;
}

int main(void){

	int c;
	char s_text[MAXLIMIT];
	char *c_text;
	int i =0;
	int j;

	while(( c = getchar()) != EOF) {

		if(i < (MAXLIMIT -1)){
			s_text[i] = c;
			++i;
			}
		}
	/*
	for(j = 0; j < i; ++j){
		printf("%c",s_text[j]);
		} */

		c_text = squeeze(s_text,getchar());
		//s_text[0] = c_text;
		printf("what what?? %s\n",c_text);
return 0;

}
