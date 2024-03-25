#include "main.h"

/**
 * _isalpha - check character
 * @c: parameter to be checked
 * Return: 1 (lower or upper), 0 (otherwise)
 */

int _isalpha(int c)
{
	if (c <= 90 && c >= 60)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
