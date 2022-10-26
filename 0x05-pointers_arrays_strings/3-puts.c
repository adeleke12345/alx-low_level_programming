#include "holberton.h"

/**
 *_puts - prints a string, followed by a new line.
 *@str: input string.
 *Return: no return.
 */

void _puts(char *str)
{
	int numb = 0;

	while (numb >= 0)
	{
		if (str[numb] == '\0')
		{
			_putchar('\n');
			break;
		}
		
		putchar(str[numb]);
		numb++;
	}

}

