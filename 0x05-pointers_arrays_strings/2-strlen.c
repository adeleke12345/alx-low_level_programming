#include "holberton.h"

/**
 *_strlen - returns the length of a string.
 *@s: input string.
 *Return: length of a string.
 */

int _strlen(char *s)
{
	int lenstrg = 0;

	while (*(s + lenstrg) != '\0')
		lenstrg++;
	
	return (lenstrg);
}
