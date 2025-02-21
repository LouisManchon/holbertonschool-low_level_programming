#include "main.h"

/**
 * main - Write a program that prints  the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97 ; a < 123 ; a++)
		putchar(a);

	putchar('\n');
}
