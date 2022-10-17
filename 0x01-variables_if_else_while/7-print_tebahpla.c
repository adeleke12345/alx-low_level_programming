#include <stdio.h>

/**
*main - to print alphabet reversed using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	char revlet = 'z';

	while (revlet >= 'a')

	{
		putchar(revlet);
		revlet--;
	}

	putchar('\n');

	return (0);

}

