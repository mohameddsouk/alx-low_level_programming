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
	char ch = 'a';
	char x = 'A';

	while (ch <= 'z')
	{
		putchar(ch);

		ch++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
