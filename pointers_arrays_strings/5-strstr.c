#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: origin string
 * @needle: pointed substring
 *
 * Return: substring location (pointer)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int search = 0;
	unsigned int comp = 0;

	while (haystack[search] != '\0')
	{
		while (needle[comp] != '\0')
		{
			if (haystack[search + comp] != needle[comp])
			{
				break;
			}

			comp++;
		}

		if (needle[comp] == '\0')
		{
			return (haystack + search);
		}

		search++;
	}
	return ('\0');
}
