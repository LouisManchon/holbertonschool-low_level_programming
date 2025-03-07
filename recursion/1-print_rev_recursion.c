#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointed string
 *
 * No return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char *reverse;

		reverse = s + 1;
		_print_rev_recursion(reverse);
		_putchar(*s);
	}
}
