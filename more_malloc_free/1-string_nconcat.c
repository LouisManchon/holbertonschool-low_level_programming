#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: allocated memory
 *
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_return;
	unsigned int i, j, counter = 0;
	
	if (n >= sizeof(s2))
		n = sizeof(s2) - 1;

	str_return = malloc(sizeof(char) * (sizeof(s1) + n + 1));

	if (str_return == NULL)
		return (NULL);
	

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[counter])
		counter++;

	for (i = 0 ; i < counter ; i++)
		str_return[i] = s1[i];
	for (j = 0 ; j < n ; j++)
	{
		str_return[i + j] = s2[j];
	}

	return (str_return);
}
