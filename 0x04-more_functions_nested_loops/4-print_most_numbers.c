#include "holberton.h"

/**
 *print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void)
{
	char xi;

	for (xi = '0'; xi <= '9'; xi++)
	{
		if (xi != '2' && xi != '4')
		_putchar(xi);
	}
	_putchar('\n');
}
