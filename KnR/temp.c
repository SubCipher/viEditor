#include <stdio.h>

int main(void)
	{
	int c;
	while ((c = getchar()) != EOF)
		{
		if (c ==' '){
		c = '\\b';
		printf("%d",c);
		}
}

return 0;

}
