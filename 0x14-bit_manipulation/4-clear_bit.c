#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0
 * @n: Pointer to the number
 * @index: The index of the bit to set
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	unsigned long int mask = 1 << index;
	mask = ~mask;
	*n &= mask;
	return 1;
}
