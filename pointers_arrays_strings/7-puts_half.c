#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line
 *@str: string
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n])
		n++;
	n = (n + 1) / 2;
	while (str[n])
		_putchar(str[n++]);
	_putchar('\n');
}
