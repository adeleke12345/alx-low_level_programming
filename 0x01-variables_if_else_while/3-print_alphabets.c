#include <stdio.h>
#include <ctype.h>

int main ()

{

	char ch, result;

	result = tolower(ch);

	for(ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(tolower(ch)); /*print lowercases a-z*/
		putchar('\n');
	}

	for(ch = 'A' ; ch <= 'Z' ; ch++)
	{
	        putchar(ch); /*print uppercase A-Z*/
                putchar('\n');
        }	

	return(0);

}
