#include "holberton.h"

/**
 * _isalpha - checks if an argument is a letter
 *
 * @c: parameter of type int
 *
 * Return: 1 if c is a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int num;

	for (num = 0; num < 52; num++)
	{
		if (alpha[num] == c)
		{
			return (1);
		}
	}
	return (0);
}
