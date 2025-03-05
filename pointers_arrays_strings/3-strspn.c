#include "main.h"

/**
 *_strspn - returns the length of a prefix substring
 * @s: pointed string
 * @accept: string of accepted characters
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix, comp;

	prefix = 0;
	while (s[prefix] != '\0')
	{
		comp = 0;
		while (accept[comp] != '\0' && s[prefix] != accept[comp])
			comp++;
		if (accept[comp] == '\0')
			return (prefix);
		prefix++;
	}
	return (prefix);
}
