#include "holberton.h"

/**
 *Print_square - prints hashes squares.
 *At size: size of the square.
 *For return: no return.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');

	}
	_putchar('\n');

}
