#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
