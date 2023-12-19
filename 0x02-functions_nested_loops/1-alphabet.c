#include "main.h"

/**
* print_alphabet - prints alphabet
* Return: Always 0 (Success)
*
*/
void print_alphabet(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		_putchar(lt);
	}
	_putchar('\n');
}
