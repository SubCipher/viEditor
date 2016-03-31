#include <stdio.h>
#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){

	int max;
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = myGetline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest,line);
		}

	if(max > 0)
		printf("this is the longest val: %s", longest);
	return 0;

	}

//function called by main()

int myGetline(char s[], int lim){

	int c, i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
		if(c == '\n'){
			s[i] = c;
			++i;
		}
	s[i] = '\0';
	return i;
	}

	void copy(char to[], char from[])
		{
			int i;
			i = 0;
			while(( to[i] = from[i]) != '\0')
				++i;
	}


