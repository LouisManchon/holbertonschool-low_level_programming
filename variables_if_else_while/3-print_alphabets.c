#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase then uppercase
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97 ; a < 123 ; a++)
		putchar(a);
	for (a = 65 ; a < 91 ; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
