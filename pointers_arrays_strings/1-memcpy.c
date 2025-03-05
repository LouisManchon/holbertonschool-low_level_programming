#include "main.h"

/**
 * *_memcpy -  function  copies  n bytes from memory
 * @dest: memory area to go
 * @src: original memory
 * @n: array taille
 * Return: pointeur to return
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
