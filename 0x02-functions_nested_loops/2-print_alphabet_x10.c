#include "holberton.h"

/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 0; num < 10; num++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
}
