#include <stdio.h>
#include <ctype.h>

int main ()

{

	char ch, result;

	result = tolower(ch);

	for(ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(tolower(ch));
		putchar('\n');
	}

	return(0);

}
