#include "main.h"

/**
 * _puts_recursion - writes a string, followed by a new line
 * @s: string of characters
 *
 * No return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');

	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
