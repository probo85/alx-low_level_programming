#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * c - parameter of int type
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int num;

	for (num = 0; num <= 25; num++)
	{
		if (alpha[num] == c)
		{
			return (1);
		}
	}

	return (0);
}
