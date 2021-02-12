#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	char digit[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == digit[i])
		{
			return (1);
		}
	}

	return (0);
}
