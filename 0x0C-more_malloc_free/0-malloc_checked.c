#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the value
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *malloc_checked;

malloc_checked = malloc(b);

if (malloc_checked == NULL)
{
exit(98);
}
return (malloc_checked);
}
