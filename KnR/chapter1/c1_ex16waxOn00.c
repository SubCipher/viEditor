#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy (char to[], char from[]);

int main(){

	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = myGetline(line, MAXLINE)) > 0)
		if(len > max) {
		max = len;
		printf("max val: %d",max);
		copy(longest, line);
		}
	if(max > 0)
		printf("%s", longest);
	return 0;
	}

int myGetline(char s[], int lim)
	{
		int c, i;
		for(i = 0; lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
			s[i] = c;
		if(c =='\n'){
		s[i] = c;
		++i;
		}
		s[i] ='\0';
	return i;
	}
void copy(char to[], char from[])
	{
		int i;
		while((to[i] = from[i]) != '\0')
		++i;
	}
