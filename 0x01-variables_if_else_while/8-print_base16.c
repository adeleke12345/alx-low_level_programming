/*
*File: 8-print_base16.c
*Auth: Ralph
*/

#include <stdio.h>

/*
*main - Prints all the numbers of base 16 in lowercase.
*
*Return: Always 0 for Success.
*/

int main(void)
{
        int dig;

	char alpha;

	for (dig = 0; dig < 10; dig++)

		putchar((dig % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)

		putchar(alpha);

		putchar('\n');

	return (0);
}
