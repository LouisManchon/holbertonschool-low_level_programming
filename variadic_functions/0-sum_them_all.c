#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - computes the sum of all arguments
 * @n: number of arguments
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int result = 0;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);

	va_end(numbers);

	return (result);
}
