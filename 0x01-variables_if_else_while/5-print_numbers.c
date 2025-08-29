#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);

		digit++;
	}
	putchar('\n');
	return (0);
}
