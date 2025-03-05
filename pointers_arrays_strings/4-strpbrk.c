#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string
 * @s: string to find
 * @accept: char to find
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned char search;

	while (*s != '\0')
	{
		for (search = 0 ; accept[search] != '\0'; search++)
		{
			if (*s == accept[search])
				return (s);
		}
		s++;
	}
	return (0);
}
