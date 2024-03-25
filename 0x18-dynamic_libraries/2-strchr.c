#include "main.h"

/**
 * _strchr - function
 * @s: parameter
 * @c: parameter
 * Return: c if s else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
