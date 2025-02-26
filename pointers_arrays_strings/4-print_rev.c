#include "main.h"
#include "2-strlen.c"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 *@s: string of the task
 */

void print_rev(char *s)
{
	int length;

	for (length = _strlen(s) - 1 ; length >= 0 ; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
