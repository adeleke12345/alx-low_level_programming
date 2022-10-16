#include <stdio.h>
#include <ctype.h>

int main (void)

{

	char ch, result, e, q;

	e = 'e';
	q = 'q';

	/*result = tolower(ch);*/

	for(ch = 'A' ; ch <= 'Z' ; ch++)
	{
		result = tolower(ch);
		if (result != e && result != q)

			putchar(result);
		        putchar('\n');

	}

	/*   putchar('\n'); to jump a line*/

	return(0);

}

