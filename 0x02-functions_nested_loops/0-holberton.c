#include <stdio.h>
#include "holberton.h"

/**
*main - entry point to the function that prints "holberton"
*Return : Always 0 (success)
*/

int main(void)
{
	char *str = "Holberton\n";

	while(*str)
		_putchar(*str++);

	return (0);
}
