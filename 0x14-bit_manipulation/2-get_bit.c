#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1 << index;
	return ((n & mask) != 0);
}
