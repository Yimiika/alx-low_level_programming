#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the provided format
 * @format: The format string indicating the types of arguments
 * @...: The variable number of arguments
 */
void print_all(const char * const format, ...)
{
    va_list args;
    const char *str;
    int i = 0;
    char c;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = (char)va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = (float)va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                break;
            default:
                i++;
                continue;
        }

        if (format[i + 1] != '\0')
            printf(", ");

        i++;
    }

    printf("\n");

    va_end(args);
}
