#include "main.h"

/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	for (; haystack[j];)
	{
		for (; needle[j] && (haystack[i] == needle[0]);)
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
