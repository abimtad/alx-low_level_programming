#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: Always 0 (Success)
*
*/
void print_alphabet_x10(void)
{
	char lt;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (lt = 'a'; lt <= 'z'; lt++)
		{
			_putchar(lt);
		}
		_putchar('\n');
	}
}
