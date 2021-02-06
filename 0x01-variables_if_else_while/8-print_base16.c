#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point to printing hexadecimal numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
