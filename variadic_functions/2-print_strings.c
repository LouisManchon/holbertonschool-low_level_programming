#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, separated by strings
 * @separator: separating string
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *strings;

	if (!separator)
		separator = "";

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(arguments, char *);

		if (strings == NULL)
			printf("(nil)");

		else
			printf("%s", strings);

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arguments);
}
