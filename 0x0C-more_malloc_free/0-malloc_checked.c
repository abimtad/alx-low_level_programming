#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if (ptr == NULL)
    {
        _putchar('E'); 
        _putchar('\n');
        exit(98);
    }

    return ptr;
}
