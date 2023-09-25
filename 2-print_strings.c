#include "variadic_function.h"

void print_strings(const char *seperator, const unsigned int n, ...)
{
    unsigned int i;
    va_list ptr;
    int *arr = malloc(sizeof(int) * n);

    va_start(ptr, n);

    for (i = 0, i < n; i++)
    {
        if (va_arg(ptr, char *) == NULL)
            
    }
}