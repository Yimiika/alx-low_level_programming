#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to a string containing the name
 * @f: function pointer that takes a char * argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
