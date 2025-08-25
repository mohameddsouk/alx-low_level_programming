#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	printf("Size of a char: %c bytes\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %1d bytes\n", sizeof(long int));
	printf("Size of a long long int: %11d bytes\n", sizeof(long long int));
	printf("Size of a float: %f bytes\n", sizeof(float));
	return (0);
}
