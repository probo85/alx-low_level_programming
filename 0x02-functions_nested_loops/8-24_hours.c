#include "holberton.h"

/**
 * jack_bauer - print every minute of a day
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = '00'; i < '24'; i++)
	{
		for (j = '00'; j <= '59'; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
