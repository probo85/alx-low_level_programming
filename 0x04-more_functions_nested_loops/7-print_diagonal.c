#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
