#include "main.h"

/**
* _abs - Computes the absolute value of an integer
* @n: The number to be computed
* Return: 1 for positive num, -1 for negative or 0 for anything else
*
*/
int _abs(int n)
{
	if (n < 0)
	{
		int v;
		v = n * -1;
		return (v);
	}
	else
	{
		return (0);
	}
}
