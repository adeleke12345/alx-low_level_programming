#include "holberton.h"

/**
 *Print_alphabet - Check description
 *Description: This code prints the alphabet in lowercase fallowed by a new line
 *Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
