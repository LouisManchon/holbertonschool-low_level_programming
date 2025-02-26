#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: suite de caractères (string)
 *
 * Return: length du char *s
 */

int _strlen(char *s)
{
	int length;

	for (length = 0 ; s[length] != '\0';)
	{
		(length++);
	}
	return (length);
}
