#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if (i % 3 && 5 == 0)
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else
		{
			printf(" ");
			printf("%d", i);
		}
	}
	return (0);
}
