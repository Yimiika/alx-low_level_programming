#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed btw the strings
 * @n: number of strings passed to the function
 * @...: The variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    const char *str;
	unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        str = va_arg(args, const char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(args);
}
