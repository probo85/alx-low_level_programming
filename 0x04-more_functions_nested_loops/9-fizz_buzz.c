#include <stdio.h>

/**
 * main - Entry point for printing numbers 1 to 100
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	return (0);
}
