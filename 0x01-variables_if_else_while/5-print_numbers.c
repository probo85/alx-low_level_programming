#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point into a function that prints single digit numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
