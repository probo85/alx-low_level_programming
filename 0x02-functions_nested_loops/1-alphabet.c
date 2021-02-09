#include <stdio.h>
#include "holberton.h"

/**
 *main - printing low-case alphabets
 *
 *Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
	return (0);
}
