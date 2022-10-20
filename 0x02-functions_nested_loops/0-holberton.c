#include <unistd.h>
#include "holberton.h"

/**
 *main - Check description
 *Description: This programm prints the word Holberton, followed by a new line.
 *Return: 0 if runs successfully.
 */

int main(void)

{
	char word[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
