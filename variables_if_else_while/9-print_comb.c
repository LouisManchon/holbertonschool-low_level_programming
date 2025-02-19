#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48 ; a <= 57 ; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
