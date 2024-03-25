#include "main.h"

/**
 * _memcpy - function
 * @dest: parameter
 * @src: parameter
 * @n: parametrer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
