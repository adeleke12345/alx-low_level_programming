#include "holberton.h"

/**
 *Print_line - print the character "_" n times to draw a line
 *For n: number of characters to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
