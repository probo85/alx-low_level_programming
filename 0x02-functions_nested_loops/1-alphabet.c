#include <stdio.h>
#include "holberton.h"

/**
 *print_alphabet - prints lowercase alphabets
 *
 *Return : void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}

/**
 *main - entry point for the function print_alphabet
 *
 *Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
