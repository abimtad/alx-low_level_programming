#include <stdarg.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
    if (n == 0) return (0);
    va_list args;
    va_start(args, n);
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += va_arg(args, int);
        
    return (sum);
}