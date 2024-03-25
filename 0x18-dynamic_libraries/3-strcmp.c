#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: parameter
 * @s2: parametr
 * Return: nothing
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if ( *s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

