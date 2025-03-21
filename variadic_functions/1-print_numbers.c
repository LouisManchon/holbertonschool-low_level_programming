#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers, separated by a string
 * of given characters
 * @separator: string of chars separating numbers
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
