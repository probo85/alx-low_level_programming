#include <stdio.h>
#include <stdlib.h>

/**
 *main- entry point to printing the tebahpla
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
