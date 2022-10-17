/*
 *File: 9-print_comb.c
 *Auth:Ralph
 */

#include <stdio.h>

/**
 *main - Prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0 if program executon is okay.
 */
int main(void)
{
	int digno;

		for (digno = 0; digno <= 9; digno++)
		{
		
			putchar((digno % 10) + '0');
			if (digno == 9)
			        continue;
												
			putchar(',');
			putchar(' ');
		}

		putchar('\n');

		return (0);
}
