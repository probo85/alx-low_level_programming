#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * n : integer type
 * Return: 1 if n is greater than zero
 * -1 if n is less than zero
 * 0 if n is zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	return (0);
}
