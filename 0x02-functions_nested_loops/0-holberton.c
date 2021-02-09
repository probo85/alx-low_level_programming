#include <stdio.h>
#include "holberton.h"

/**
 *main - prints "Holberton" without using any std libraries
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char *str = "Holberton\n";

	while (*str)
		_putchar(*str++);

	return (0);
}
