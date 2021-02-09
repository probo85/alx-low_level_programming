#include "holberton.h"

/**
 * times_table - prints the multiplication table of 9
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int multiplied;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			multiplied = i * j;
			_putchar(multiplied);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
