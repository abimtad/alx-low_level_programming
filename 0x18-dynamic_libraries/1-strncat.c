#include "main.h"

/**
 * _strncat - concatenates by size
 * @dest: parameter
 * @src: parameter
 * @n: size
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
