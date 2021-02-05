#include <stdio.h>
#include <stdlib.h>

/*
 *main-printing the alphabet to the std output
 *Return: the alphabet in lowercase, no space
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
