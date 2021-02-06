#include <stdio.h>
#include <stdlib.h>

/**
 *main-printing all small alphabets except c and q
 *Return: using putchar
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'c' && ch == 'q')
			break;

		putchar(ch);
	}
	putchar('\n');
	return (0);
}

