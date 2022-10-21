#include "holberton.h"

/**
 *more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char j;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 > 0)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
