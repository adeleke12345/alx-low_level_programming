#include "holberton.h"

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *Return: set '1' if Upper case,and '0' if others
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
