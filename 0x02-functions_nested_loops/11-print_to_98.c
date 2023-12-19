#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Printes number from n to 98
* @n: The number to strart from
* Return: void (nothing)
*
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
		}
	}
}
