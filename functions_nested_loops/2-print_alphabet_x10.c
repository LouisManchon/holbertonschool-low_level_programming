#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 97 ; a < 123 ; a++)
		_putchar(a);
		_putchar('\n');
	}
}
