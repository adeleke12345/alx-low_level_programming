#include <stdio.h>
/**
 * main - Entry point
 * - print 0123456789 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int digno;


	for (digno = 0; digno < 10; digno++)

		putchar((digno % 10) + '0');

	
	putchar('\n');


	return (0);

}
