#include "holberton.h"

/**
 * more_numbers - print the numbers 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;
	int j;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (b == 1 && j == '5')
				{
					break;
				}
				else if (b == 1)
				{
					_putchar('1');
					_putchar(j);
				}
				else
				{
					_putchar(j);
				}
			}
		}

		_putchar('\n');
	}
}
