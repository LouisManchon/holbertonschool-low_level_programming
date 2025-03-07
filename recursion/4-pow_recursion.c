#include "main.h"

/**
 * _pow_recursion - returns the value of a first number
 * raised to the power of a second number
 * @x: first number
 * @y: second nummber
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
