#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @i : integer type
 * Return: positive integer or 0
 */
int _abs(int i)
{
	if (i <= 0)
		return (i * -1);
	return (i);
}
