#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked of int type
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == alpha[i])
		{
			return (1);
		}
	}

	return (0);
}
