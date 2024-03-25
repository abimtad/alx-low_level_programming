#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}
