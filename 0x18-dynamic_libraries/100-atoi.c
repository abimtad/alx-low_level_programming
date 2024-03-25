#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: parameter
 * Return: 0 if there are no intigers in the string
 */

int _atoi(char *s)
{
	int i = 0, j = 1, k = 0;
	unsigned int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			j *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			k = 1;
			l = (l * 10) + (s[i] - '0');
			i++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	l *= j;
	return (l);
}
